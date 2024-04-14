#include <iostream>
#include "logger.hpp"
using namespace std;
int Logger::ctr = 0;
Logger *Logger::loggerInstance = NULL;

Logger::Logger(){
    ctr++ ;
    cout << "New instance of Logger created, no of instances: " << ctr << endl;
}

void Logger::Log(string msg){
    cout << msg << endl;
}

Logger* Logger::getLogger(){

    if(loggerInstance == NULL)
        loggerInstance = new Logger();
    return loggerInstance;

}