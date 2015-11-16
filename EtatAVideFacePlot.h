#ifndef _ETAT_A_VIDE_FACE_PLOT_H_
#define _ETAT_A_VIDE_FACE_PLOT_H_

#include <string>
using namespace std;
#include "EtatEnRoute.h"

class EtatAVideFacePlot : public EtatEnRoute {

private:
	static EtatAVideFacePlot* inst;

public:
	EtatRobot* tourner();

	EtatRobot* saisir();

	EtatRobot* evaluerPlot();

	string getNom();

	static EtatAVideFacePlot* getSingleton();
};

#endif