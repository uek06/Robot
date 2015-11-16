#include "EtatEnCharge.h"
#include "EtatEnChargeFacePlot.h"

EtatEnCharge* EtatEnCharge::inst = new EtatEnCharge;

EtatRobot* EtatEnCharge::avancer() {
	return this;
}

EtatRobot* EtatEnCharge::peser() {
	return this;
}

EtatRobot* EtatEnCharge::rencontrerPlot() {
	return EtatEnChargeFacePlot::getSingleton();
}

string EtatEnCharge::getNom() {
	return "Etat en charge";
}

EtatEnCharge* EtatEnCharge::getSingleton() {
	return inst;
}
