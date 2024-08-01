//
// Created by Harrison Baker on 8/1/24.
//
#include "../include/Boat.h"
#include <iostream>


Boat::Boat() : Vehicle(0, Position(0, 0), 0, 0)
{

}

Boat::Boat(double speed, Position position, int numPassengers, int maxPassengers): Vehicle(speed, position, numPassengers, maxPassengers) {

}

void Boat::travel(Position destination) {
	std::cout << std::setprecision(4) << "This boat sails " << Position::calcDistance(getPosition(), destination)
	          << " miles to" << destination <<  " over seas, lakes, and rivers. This trip takes "
	          << getETA(destination) << " hours." << std::endl;
}

