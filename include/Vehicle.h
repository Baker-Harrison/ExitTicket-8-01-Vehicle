//
// Created by Harrison Baker on 8/1/24.
//

#ifndef POSITION_PRACTICE_VEHICLE_H
#define POSITION_PRACTICE_VEHICLE_H

#include "Position.h"
#include <iomanip>

class Vehicle
{
private:
	double speed;
	Position position;
	int numPassengers;
	int maxPassengers;

public:
	Vehicle();
	Vehicle(double speed, Position position, int numPassengers, int maxPassengers);

	double getSpeed() const;
	Position getPosition() const;
	int getNumPassengers() const;
	int getMaxPassengers() const;

	void setSpeed(double newSpeed);
	void setPosition(Position newPosition);
	void setNumPassengers(int newNumPassengers);
	void setMaxPassengers(int newMaxPassengers);

	double getETA(Position destination);
	virtual void travel(Position destination) = 0;
};

#endif //POSITION_PRACTICE_VEHICLE_H
