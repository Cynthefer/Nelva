
#include "include/nelva.h"
#include <initializer_list>

using namespace std;

struct initializer {
    initializer(){
        oper();
    }
} initializer;

int main(int argc, char* argv[]){
    oper();
    for(int i = 1; i < argc; ++i){
        string arg = argv[i];

        if(arg == "-h" || arg == "--help"){
            help();
        } else if( arg == "-v" || arg == "--version"){
            version();
        } else if( arg == "-u" | arg == "--user"){
            user();
        } else if (arg == "-o" | arg == "--operating-system"){
            operating();
        }
    };
    return EXIT_SUCCESS;
}
