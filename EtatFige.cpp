#include "EtatFige.h"

EtatFige* EtatFige::inst = new EtatFige;

EtatRobot* EtatFige::repartir() {
	return reinterpret_cast<EtatRobot*>(etatPrecedent);
}

string EtatFige::getNom() {
	return "Etat figé";
}

EtatFige* EtatFige::getSingleton() {
	return inst;
}

void EtatFige::setEtatPrecedent(EtatEnRoute* etat){
	etatPrecedent = etat;
}
