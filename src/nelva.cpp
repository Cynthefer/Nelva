#include <iostream>

#include "../include/nelva.h"
#include "../include/software.h"

using namespace std;

[[maybe_unused]]string hr = "\n------------------------------------------\n";

int help(){
    cout << "Usage: nelva [-h | --help] [-v | --version] [-u | --user] [-o | --operating-system] [-m | --memory] [-n | --network] [--hardware] [-i | --install]\n" << endl;

    cout << "Options:\n" << endl;
    cout << setw(35) << setiosflags(ios::left) << " [-h | --help]" << "Prints this message\n";
    cout << setw(35) << setiosflags(ios::left) << " [-v | --version]" << "Displays the software version\n";
    cout << setw(35) << setiosflags(ios::left) << " [-u | --user]" << "Displays user information\n";
    cout << setw(35) << setiosflags(ios::left) << " [-o | --operating-system]" << "Displays OS information\n";
    return 0;
}

int version(){
    cout << setw(25) << setiosflags(ios::left) << " Version: " << VERSION << endl;
    return 0;
}

int user(){
    cout << hr;
    cout << "              USER INFORMATION        ";
    cout << hr;
    cout << setw(25) << setiosflags(ios::left) << "Username " << ":" << username << endl;
    cout << setw(25) << setiosflags(ios::left) << "Password " << ":" << password << endl;
    cout << setw(25) << setiosflags(ios::left) << "User ID " << ":" << user_id << endl;
    cout << setw(25) << setiosflags(ios::left) << "Group ID " << ":" << group_id << endl;
    cout << setw(25) << setiosflags(ios::left) << "Shell " << ":" << shell << endl;
    cout << setw(25) << setiosflags(ios::left) << "Directory " << ":" << directory << endl;
    return 0;
}

int operating(){
    cout << 7;
    return 0;
}