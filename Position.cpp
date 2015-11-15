#include "Position.h"

void Position::getX() {
	return this->x;
}

void Position::setX(int x) {
	this->x = x;
}

void Position::getY() {
	return this->y;
}

void Position::setY(int y) {
	this->y=y;
}

ostream& operator<<(ostream& os, Position& pos){
	return os << "Position: (" << pos.x << ";" << pos.y << ")" << endl;
}
