#ifndef _ETAT_A_VIDE_H_
#define _ETAT_A_VIDE_H_

using namespace std;
#include "EtatEnRoute.h"
#include <string>

class EtatAVide : EtatEnRoute {

private:
	static EtatAVide* inst;

public:
	EtatRobot* avancer();

	EtatRobot* rencontrerPlot();

	String getNom();

	EtatAVide* getSingleton();
};

#endif