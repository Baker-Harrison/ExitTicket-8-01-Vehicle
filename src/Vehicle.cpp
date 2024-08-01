//
// Created by Harrison Baker on 8/1/24.
//
#include "../include/Vehicle.h"


Vehicle::Vehicle() {
	this->speed = 0.0;
	this->position = Position(0, 0);
	this->numPassengers = 0;
	this->maxPassengers = 0;
}

Vehicle::Vehicle(double speed, Position position, int numPassengers, int maxPassengers) {
	this->speed = speed;
	this->position = position;
	this->numPassengers = numPassengers;
	this->maxPassengers = maxPassengers;
}

double Vehicle::getSpeed() const{
	return speed;
}

Position Vehicle::getPosition()  const{
	return position;
}

int Vehicle::getNumPassengers() const {
	return numPassengers;
}

int Vehicle::getMaxPassengers() const {
	return maxPassengers;
}

void Vehicle::setSpeed(double newSpeed) {
	this->speed = newSpeed;
}

void Vehicle::setPosition(Position newPosition) {
	this->position = newPosition;
}

void Vehicle::setNumPassengers(int newNumPassengers) {
	this->numPassengers = newNumPassengers;
}

void Vehicle::setMaxPassengers(int newMaxPassengers) {
	this->maxPassengers = newMaxPassengers;
}

double Vehicle::getETA(Position destination) {
	double distance = Position::calcDistance(position, destination);
	return distance / speed;
}



