#include <iostream>
#include "include/Position.h"
#include "include/Vehicle.h"
#include "include/Car.h"
#include "include/Boat.h"

using namespace std;

void testBoatCar();

int main() {
	testBoatCar();
	return 0;
}

void testBoatCar()
{
	Vehicle* vehicles[5];

	Car car1 = Car(3, Position(2, 3), 3, 5);

	vehicles[0] = &car1;

	Car car2 = Car(4, Position(2, 1), 3, 5);

	vehicles[1] = &car2;

	Boat boat1 = Boat(3, Position(3, 8), 3, 5);

	vehicles[2] = &boat1;

	Boat boat2 = Boat(4, Position(4, 9), 3, 5);

	vehicles[3] = &boat2;


	Boat boat3 = Boat(4, Position(1, 6), 3, 5);

	vehicles[4] = &boat3;

	vehicles[0]->travel(Position(27.348, 9.389));


	vehicles[4]->travel(Position(28.66, 12.24));








}