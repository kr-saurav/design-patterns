#include <iostream>
#include "logger.hpp"
using namespace std;

int main(){
    

    // here 2 instance is getting created and its not following singleton pattern.
    Logger * logger1 = new Logger();
    logger1->Log("this msg is from user 1") ;

    Logger * logger2 = new Logger();
    logger2->Log("this msg is from user 2") ;

    return 0;
}