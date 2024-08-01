//
// Created by Harrison Baker on 8/1/24.
//

#include "../include/Position.h"
#include <cmath>
#include <iomanip>

Position::Position(double x, double y) {
	this->x = x;
	this->y = y;
}

Position::Position() {
	this->x = 0;
	this->y = 0;
}

double Position::getX() {
	return x;
}

double Position::getY() {
	return y;
}

void Position::setX(double x) {
	this->x = x;
}

void Position::setY(double y) {
	this->y = y;
}

double Position::calcDistance(Position start, Position end){
	double distance;

	distance = sqrt(pow((end.x - start.x), 2) + pow((end.y - start.y), 2));
	return distance;
}

std::ostream &operator<<(std::ostream &strm, const Position &position) {
	strm << "(" << std::setprecision(3) <<  position.x << " , " << position.y << ")";
	std::setprecision(6);
	return strm;
}
