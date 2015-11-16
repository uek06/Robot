#include "Robot.h"
#include "EtatRobot.h"
#include "EtatFige.h"
#include "EtatEnRoute.h"
#include "Afficheur.h"

#include <iostream>

using namespace std;

int main(){
	//création du robot
	Robot robot;
	//création du plot
	Plot p(10);
	//cration de l'objet
	Objet o(20);
	//création de l'état
	EtatRobot e;
	//création de l'afficheur
	Afficheur afficheur;
	afficheur.setObservable(&robot);
	robot.addObserver(&afficheur);

	//à vide
	robot.avancer(5);
	robot.tourner('N');
	robot.peser();
	//à vide face plot
	robot.rencontrerPlot(p);
	robot.evaluerPlot();
	//à vide
	robot.tourner('S');
	//à vide face plot
	robot.rencontrerPlot(p);
	//en charge face plot
	robot.saisir(o);
	robot.poser();
	robot.saisir(o);
	//figé
	robot.figer();
	robot.repartir();
	//en charge
	robot.tourner('E');
	robot.rencontrerPlot(p);
	robot.tourner('O');
	robot.avancer(5);
	robot.tourner('N');
	robot.peser();
	robot.avancer(10);
	robot.repartir();
	//en charge face plot
	robot.evaluerPlot();
	robot.peser();

	return 0;
}