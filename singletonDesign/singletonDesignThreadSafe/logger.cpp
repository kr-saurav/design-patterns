#include <iostream>
#include "logger.hpp"
using namespace std;
int Logger::ctr = 0;
Logger *Logger::loggerInstance = NULL;
mutex Logger::mtx;

Logger::Logger(){
    ctr++ ;
    cout << "New instance of Logger created, no of instances: " << ctr << endl;
}

void Logger::Log(string msg){
    cout << msg << endl;
}

Logger* Logger::getLogger(){
    
    if(loggerInstance==nullptr){ // this if condition will ensure that the mtx is locked only one time otherwise it will be called multiple times whenever 
                                 // any object will be created and mtx is very expensive so we can restrict their use.
        mtx.lock();
        if(loggerInstance == NULL)
            loggerInstance = new Logger();
        mtx.unlock();
    }
    return loggerInstance;
}