#ifndef _ETAT_EN_CHARGE_H_
#define _ETAT_EN_CHARGE_H_

#include "EtatEnRoute.h"
using namespace std;

class EtatEnCharge : EtatEnRoute {
private:
	static EtatEnCharge* inst;

public:
	EtatRobot* avancer();

	EtatRobot* peser();

	EtatRobot* rencontrerPlot();

	String getNom();

	EtatEnCharge* getSingleton();
};

#endif