#include "EtatEnChargeFacePlot.h"
#include "EtatAVideFacePlot.h"
#include "EtatEnCharge.h"

EtatEnChargeFacePlot* EtatEnChargeFacePlot::inst = new EtatEnChargeFacePlot;s

EtatRobot* EtatEnChargeFacePlot::tourner() {
	return EtatEnCharge::getSingleton();
}

EtatRobot* EtatEnChargeFacePlot::peser() {
	return this;
}

EtatRobot* EtatEnChargeFacePlot::poser() {
	return EtatAVideFacePlot::getSingleton();
}

string EtatEnChargeFacePlot::getNom() {
	return "Etat en charge face à un plot";
}

EtatEnChargeFacePlot* EtatEnChargeFacePlot::getSingleton() {
	return inst;
}
