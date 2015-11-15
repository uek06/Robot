#include "Objet.h"

int Objet::getPoids() {
	return this->poids;
}


ostream& operator<<(ostream& os, const Objet& obj){
	if(obj.poids == 0){
		return os << "Le robot ne porte pas d'objet" << endl;
	}
	else{
		return os << "Poids de l'objet: " << obj.poids << endl;
	}
}