#ifndef SOFTWARE_H
#define SOFTWARE_H

#include <string>
#include <stdio.h>
#include <iostream>
#include <iomanip>

#ifdef _WIN32
    #include <windows.h>
    #include <tchar.h>
    #include <winsock2.h>
    #include <ws2tcpip.h>
    #include <process.h>
    #include <direct.h>
#else
    #include <pwd.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/socket.h>
    #include <sys/utsname.h>
    #include <sys/sysinfo.h>
#endif// OS Detection

using namespace std; 

//User Information
extern const string username;
extern const string password;
extern const unsigned int user_id;
extern const unsigned int group_id;
extern const string shell;
extern const string hostname;
extern const string directory;

#endif// SOFTWARE_H

