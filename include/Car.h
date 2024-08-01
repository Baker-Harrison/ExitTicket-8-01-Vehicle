//
// Created by Harrison Baker on 8/1/24.
//

#ifndef POSITION_PRACTICE_CAR_H
#define POSITION_PRACTICE_CAR_H

#include "Vehicle.h"

class Car: public Vehicle
{
public:
	Car ();
	Car(double speed, Position position, int numPassengers, int maxPassengers);
	void travel(Position destination) override;
};
#endif //POSITION_PRACTICE_CAR_H
