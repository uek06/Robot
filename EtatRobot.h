#ifndef _ETAT_ROBOT_H_
#define _ETAT_ROBOT_H_

using namespace std;
#include <string>
#include <ostream>


class EtatRobot {

private:
	static EtatRobot* premierEtat;

public:
	EtatRobot* avancer();

	EtatRobot* tourner();

	EtatRobot* saisir();

	EtatRobot* poser();

	EtatRobot* peser();

	EtatRobot* rencontrerPlot();

	EtatRobot* evaluerPlot();

	EtatRobot* figer();

	EtatRobot* repartir();

	string getNom();

	static EtatRobot* getPremier();

	friend ostream& operator<<(ostream&, const EtatRobot&);
};

#endif