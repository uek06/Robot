#include "EtatRobot.h"
#include "RobotExceptions.h"
#include "EtatAVide.h"

EtatRobot* EtatRobot::premierEtat = EtatAVide::getSingleton();

EtatRobot* EtatRobot::avancer() {
	throw RobotExceptions::Avancer_Exception();
}

EtatRobot* EtatRobot::tourner() {
	throw RobotExceptions::Tourner_Exception();
}

EtatRobot* EtatRobot::saisir() {
	throw RobotExceptions::Saisir_Exception();
}

EtatRobot* EtatRobot::poser() {
	throw RobotExceptions::Poser_Exception();
}

EtatRobot* EtatRobot::peser() {
	throw RobotExceptions::Peser_Exception();
}

EtatRobot* EtatRobot::rencontrerPlot() {
	throw RobotExceptions::RencontrerPlot_Exception();
}

EtatRobot* EtatRobot::evaluerPlot() {
	throw RobotExceptions::EvaluerPlot_Exception();
}

EtatRobot* EtatRobot::figer() {
	throw RobotExceptions::Figer_Exception();
}

EtatRobot* EtatRobot::repartir() {
	throw RobotExceptions::Repartir_Exception();
}

EtatRobot* EtatRobot::getPremier() {
	return premierEtat;
}

String getNomEtat(){
	return "aucun état";
}

ostream& operator<<(ostream& o, const EtatRobot& e) {
	return o << "pas censé être appelé"<< endl;
}