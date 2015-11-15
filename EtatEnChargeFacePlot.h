#ifndef _ETAT_EN_CHARGE_FACE_PLOT_H_
#define _ETAT_EN_CHARGE_FACE_PLOT_H_

#include "EtatEnRoute.h"
using namespace std;

class EtatEnChargeFacePlot : EtatEnRoute {

private EtatEnChargeFacePlot* inst;

public:
	EtatRobot* tourner();

	EtatRobot* peser();

	EtatRobot* poser();

	String getNom();

	EtatEnChargeFacePlot* getSingleton();
};

#endif