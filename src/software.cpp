#include "../include/software.h"
#include <cstring>

#ifdef _WIN32

#else

//Setting user information
struct passwd *pw = getpwuid(getuid());
const string username(pw->pw_name);
const string password(pw->pw_passwd);
const unsigned int user_id(pw->pw_uid);
const unsigned int group_id(pw->pw_gid);
const string shell(pw->pw_shell);
const string directory(pw->pw_dir);
const string hostname = []{
    char name[1024];
    if (gethostname(name, sizeof(name)) != 0){
        //hostname = "Not Detected";
    };
    return string(name);
}();

//Getting the OS Information
struct utsname os;


const string os_name(){
    return os.sysname;
};

#endif //_WIN32
