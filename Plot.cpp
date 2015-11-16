#include "Plot.h"

int Plot::getHauteur() {
	return this->hauteur;
}

ostream& operator<<(ostream& os, const Plot& pl) {
	if(pl.hauteur == 0){
		return os << "Le robot n'est pas devant un plot" << endl;
	}
	else{
		return os << "Hauteur du plot: " << pl.hauteur << endl;
	}
}
