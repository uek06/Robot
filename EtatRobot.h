#ifndef _ETAT_ROBOT_H_
#define _ETAT_ROBOT_H_

using namespace std;
#include <string>
#include <ostream>


class EtatRobot {

private:
	static EtatRobot* premierEtat;

public:
	virtual EtatRobot* avancer();

	virtual EtatRobot* tourner();

	virtual EtatRobot* saisir();

	virtual EtatRobot* poser();

	virtual EtatRobot* peser();

	virtual EtatRobot* rencontrerPlot();

	virtual EtatRobot* evaluerPlot();

	virtual EtatRobot* figer();

	virtual EtatRobot* repartir();

	virtual string getNom();

	static EtatRobot* getPremier();

	friend ostream& operator<<(ostream&, const EtatRobot&);
};

#endif