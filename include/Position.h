//
// Created by Harrison Baker on 8/1/24.
//

#ifndef POSITION_PRACTICE_POSITION_H
#define POSITION_PRACTICE_POSITION_H


#include <ostream>

class Position {
private:
	double x;
	double y;
public:
	Position(double x, double y);
	Position();
	double getX();
	double getY();
	void setX(double x);
	void setY(double y);

	static double calcDistance(Position start, Position end);

	friend std::ostream &operator<<(std::ostream &strm, const Position &position);
};


#endif //POSITION_PRACTICE_POSITION_H
