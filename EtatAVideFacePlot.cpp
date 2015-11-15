#include "EtatAVideFacePlot.h"
#include "EtatAVide.h"
#include "EtatEnChargeFacePlot.h"

EtatAVideFacePlot* EtatAVideFacePlot::inst = new EtatAVideFacePlot;

EtatRobot EtatAVideFacePlot::tourner() {
	return EtatAVide::getSingleton();
}

EtatRobot EtatAVideFacePlot::saisir() {
	return EtatEnChargeFacePlot::getSingleton();
}

EtatRobot EtatAVideFacePlot::evaluerPlot() {
	return this;
}

String EtatAVideFacePlot::getNom() {
	return "Etat à vide face à un plot";
}

EtatAVideFacePlot EtatAVideFacePlot::getSingleton() {
	return inst;
}
