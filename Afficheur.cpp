#include "Afficheur.h"
#include "Robot.h"

void Afficheur::display() {
	if (obs == NULL){
		cout << "Il n'y a pas de robot à afficher" << endl;
	} else {
		string direct = (obs->getDirection() =='N') ? "Nord" : ((obs->getDirection() =='E') ? "Est" : ((obs->getDirection() =='S') ? "Sud" : "Ouest"));
		cout << "/**** Info Robot ****/" << endl;
		cout << "\tETAT ACTUEL : " << obs -> getEtat() -> getNom() << endl;
		cout << "\t\t" << (*(obs -> getPosition()));
		cout << "\t\tDIRECTION :  " <<  direct << endl;
		cout << "\t\t" << (*(obs -> getObjet()));
		cout << "\t\t" << (*(obs -> getPlot()));
		cout << "\n------------------------------------\n" << endl << endl;
	}
}

void Afficheur::update(Robot* r) {
	this->obs=r;
	display();
}

void Afficheur::setObservable(Robot* r) {
	this->obs = r;
}
