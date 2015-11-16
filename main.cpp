#include "Robot.h"
#include "EtatRobot.h"
#include "EtatFige.h"
#include "EtatEnRoute.h"
#include "Afficheur.h"

#include <iostream>

using namespace std;

int main(){
	//création du robot
	Robot rob;
	Plot p(10);
	Objet o(5);
	EtatRobot e;

	//Mise en place de l'afficheur
	Afficheur affi1;
	affi1.setObservable(&rob);
	rob.addObserver(&affi1);

	//Test AVide sans changement d'Etat
	rob.avancer(1);
	rob.tourner('S');
	//Test AVide fonction impossible
	rob.peser();
	//Test AVide -> aVideFacePlot
	rob.rencontrerPlot(p);
	//Test AVideFacePlot
	rob.evaluerPlot();
	//Test AVideFacePlot -> AVide
	rob.tourner('N');
	rob.rencontrerPlot(p);
	//Test AVideFacePLot <-> EnChargeFacePlot
	rob.saisir(o);
	rob.poser();
	rob.saisir(o);
	//test Figer 1
	rob.figer();
	rob.repartir();
	//Test EnChargeFacePlot
	rob.evaluerPlot();
	rob.peser();
	//Test EnChargeFacePlot <-> EnCharge
	rob.tourner('O');
	rob.rencontrerPlot(p);
	rob.tourner('E');
	//Test EnCharge
	rob.avancer(9);
	rob.tourner('S');
	rob.peser();
	//Test figer 2
	rob.figer();
	rob.avancer(10);
	rob.repartir();

	//rob.detacher(affi1);
	//Ne doit pas s'afficher
	rob.tourner('S');
	return 0;
}