//
// Created by Harrison Baker on 8/1/24.
//

#ifndef POSITION_PRACTICE_BOAT_H
#define POSITION_PRACTICE_BOAT_H


#include "Vehicle.h"

class Boat : public Vehicle
{
public:
	Boat();
	Boat(double speed, Position position, int numPassengers, int maxPassengers);
	void travel(Position destination) override;
};
#endif //POSITION_PRACTICE_BOAT_H
