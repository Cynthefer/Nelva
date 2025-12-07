#include <../include/hardware.h>

#include <iostream>
#include <fstream>
#include <string>

bool getMemoryStats(long &Total_Ram, long &Avail_Ram, long &Used_Ram) {
    std::ifstream meminfo("/proc/meminfo");
    if (!meminfo.is_open()) {
        return false;
    }

    std::string key, unit;
    long value;

    long memTotal = 0;
    long memAvailable = 0;

    while (meminfo >> key >> value >> unit) {
        if (key == "MemTotal:") {
            memTotal = value;           
        }
        else if (key == "MemAvailable:") {
            memAvailable = value;       
        }
        if (memTotal && memAvailable)
            break;
    }

    // Convert from kB to MB
    Total_Ram = memTotal / 1024;
    Avail_Ram = memAvailable / 1024;
    Used_Ram  = Total_Ram - Avail_Ram;

    return true;
}