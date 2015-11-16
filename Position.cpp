#include "Position.h"

int Position::getX() {
	return this->x;
}

void Position::setX(int x) {
	this->x = x;
}

int Position::getY() {
	return this->y;
}

void Position::setY(int y) {
	this->y=y;
}

ostream& operator<<(ostream& os, Position& pos){
	return os << "Position: (" << pos.getX() << ";" << pos.getY() << ")" << endl;
}
