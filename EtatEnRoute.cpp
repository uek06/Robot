#include "EtatEnRoute.h"
#include "EtatFige.h"

EtatRobot* EtatEnRoute::figer() {
	EtatFige::getSingleton()->setEtatPrecedent(this);
	return EtatFige::getSingleton();
}

ostream& operator<<(ostream& os, const EtatEnRoute& etat){
	return os << "Ne doit pas être appelé 2" << endl;
}
