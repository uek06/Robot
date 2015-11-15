#ifndef AFFICHEUR_H_
#define AFFICHEUR_H_

#include <iostream>
using namespace std;
class Robot;

class Afficheur {

private:
	Robot* obs;

public:
	Afficheur(): obs(NULL){}

	void display();

	void update(Robot* r);

	void setObservable(Robot* r);
};

#endif