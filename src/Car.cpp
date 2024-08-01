//
// Created by Harrison Baker on 8/1/24.
//
#include "../include/Car.h"
#include <iostream>


Car::Car() : Vehicle(0, Position(0, 0), 0, 0)
{

}

Car::Car(double speed, Position position, int numPassengers, int maxPassengers): Vehicle(speed, position, numPassengers, maxPassengers) {

}

void Car::travel(Position destination) {
	std::cout << std::setprecision(4) << "This car drives " << Position::calcDistance(getPosition(), destination)
					<< " miles to " << destination <<  " over land. This trip takes "
					<< getETA(destination) << " hours." << std::endl;
}

