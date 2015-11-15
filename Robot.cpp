#include "Robot.h"
#include "RobotExceptions.h"

void Robot::avancer(int n) {
	try{
		etat->avancer();
		if(n<0) throw Mauvaise_Direction_Exception();
		else{
			switch(direction){
				case 'N': {
					int pos = position.getY();
					position.setY(pos+n);
					break;
				}
				case 'S': {
					int pos = position.getY();
					position.setY(pos-n);
					break;
				}
				case 'E': {
					int pos = position.getX();
					position.setX(pos+n);
					break;
				}
				case 'O': {
					int pos = position.getX();
					position.setX(pos-n);
					break;
				}
				notify();
			}
		}
	}
	catch(RobotExceptions::Avancer_Exception& e){
		cerr<< "Déplacement impossible" << endl;
	}
}

void Robot::tourner(char dir) {
	try{
		etat =etat->tourner();
		direction = dir;
		plot = Plot(0);
		notify;
	}
	catch(RobotExceptions::Tourner_Exception& e){
		cerr << "Impossible de tourner" << endl;
	}
}

void Robot::saisir(Objet o) {
	try{
		etat = etat->saisir();
		objet = o;
		notify();
	}
	catch(RobotExceptions::Saisir_Exception& e){
		cerr << "Saisie impossible" << endl;
	}
}

void Robot::poser() {
	try{
		etat = etat->poser();
		objet = Objet(0);
		notify;
	}
	catch(RobotExceptions::Poser_Exception& e){
		cerr << "Impossible de poser" << endl;
	}
}

int Robot::peser() {
	try{
		etat=etat->peser();
		return objet.getPoids();
	}
	catch(RobotExceptions::Peser_Exception& e){
		cerr << "Pesage impossible" << endl;
		return -1;
	}
}

void Robot::rencontrerPlot(Plot p) {
	try{
		etat=etat->rencontrerPlot();
		plot = p;
		notify();
	}
	catch(RobotExceptions::RencontrerPlot_Exception& e){
		cerr << "Impossible de rencontrer un plot" << endl;
	}
}

int Robot::evaluerPlot() {
	try{
		etat = etat -> evaluerPlot();
		return plot.getHauteur();
	}
	catch(RobotExceptions::EvaluerPlot_Exception& e){
		cerr << "Evaluation impossible" << endl;
		return -1;
	}
}

void Robot::figer() {
	try{
		etat=etat->figer();
		notify();
	}
	catch(RobotExceptions::Figer_Exception& e){
		cerr << "Impossible de se figer" << endl;
	}
}

void Robot::repartir() {
	try{
		etat=etat->repartir();
		notify();
	}
	catch(RobotExceptions::Repartir_Exception& e){
		cerr << "Impossible de repartir" << endl;
	}
}

void Robot::notify() {
	for(int i=0; i<afficheurs.size();i++){
		afficheurs[i]->update(this);
	}
}

void Robot::addObserver(Afficheur* a) {
	afficheurs[afficheurs.size()]=a;
}
