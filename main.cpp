
#include "include/nelva.h"
#include <initializer_list>

using namespace std;

struct initializer {
    initializer(){
        //nelva();
    }
} initializer;

int main(int argc, char* argv[]){
    bool main = false;
    
    for(int i = 1; i < argc; ++i){
        string arg = argv[i];
        main = true;

        if(arg == "-h" || arg == "--help"){
            help();
        } else if( arg == "-v" || arg == "--version"){
            version();
        } else if( arg == "-u" || arg == "--user"){
            user();
        } else if (arg == "-o" || arg == "--operating-system"){
            operating();
        }
    };
    
    if(!main){
        //default program
        nelva();
    }
    return EXIT_SUCCESS;
}
