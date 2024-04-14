#include <iostream>
#include "vehicle_factory.hpp"


using namespace std;

int main(){
    

    // in the below implementation if we want to add some other type of vehicle
    // then everytime client have to add 1 condition in if-else below and also 
    // have to add corresponding header at the top of this file as our library got new type of vehicle. 
    // so its not really good idea to let client work for every change in library.
    // so its a need of factory design pattern.
    string vehicleType;
    cin >> vehicleType;
    Vehicle * vehicle = VehicleFactory::getVehicle(vehicleType);
    vehicle->createVehicle();
    return 0;
}
