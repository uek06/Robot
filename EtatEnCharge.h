#ifndef _ETAT_EN_CHARGE_H_
#define _ETAT_EN_CHARGE_H_

#include "EtatEnRoute.h"
using namespace std;

class EtatEnCharge : public EtatEnRoute {
private:
	static EtatEnCharge* inst;

public:
	EtatRobot* avancer();

	EtatRobot* peser();

	EtatRobot* rencontrerPlot();

	string getNom();

	static EtatEnCharge* getSingleton();
};

#endif