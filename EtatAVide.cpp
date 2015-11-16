#include "EtatAVide.h"
#include "EtatAVideFacePlot.h"

EtatAVide* EtatAVide::inst = new EtatAVide;

EtatRobot* EtatAVide::avancer() {
	return this;
}

EtatRobot* EtatAVide::rencontrerPlot() {
	return EtatAVideFacePlot::getSingleton();
}

string EtatAVide::getNom() {
	return "Etat à vide";
}

EtatAVide* EtatAVide::getSingleton() {
	return inst;
}
