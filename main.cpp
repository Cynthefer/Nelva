
#include "include/nelva.h"

using namespace std;

int main(int argc, char* argv[]){
    for(int i = 1; i < argc; ++i){
        string arg = argv[i];

        if(arg == "-h" || arg == "--help"){
            help();
        } else if( arg == "-v" || arg == "--version"){
            version();
        } else if( arg == "-u" | arg == "--user"){
            user();
        }
    };
    return EXIT_SUCCESS;
}
