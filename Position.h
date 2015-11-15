#ifndef POSITION_H_
#define POSITION_H_

#include <string>
#include <ostream>
using namespace std;

class Position {

private:
	int x;
	int y;

public:
	Position(int abscisse = 0, int ordonnee = 0): x(abscisse),y(ordonnee){}
	
	int getX();

	void setX(int x);

	int getY();

	void setY(int y);

	friend ostream& operator<<(ostream&,const Position&);
};

#endif
