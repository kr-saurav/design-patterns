#ifndef logger_h
#define logger_h

#include <string>
using namespace std;

class Logger{
    static int ctr; // here this is static because by doing so it will not 
                    // belong to any object but it will depned on the class only.
                    // so this variable can be used to count the number of instances/obj created from this class type.
                    // because this belogs to class and not any object so every time a new instance is created object 
                    //will not reset this ctr variable to zero because it is static.
    
public:
    Logger();
    void Log(string msg);
};

#endif