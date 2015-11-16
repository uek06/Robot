#ifndef _ROBOT_H_
#define _ROBOT_H_

using namespace std;
#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "EtatRobot.h"
#include "Afficheur.h"
//#include "EtatAVide.h"
#include <vector>

class Robot {

private:
	Objet objet;
	Position position;
	Plot plot;
	EtatRobot* etat;
	char direction;
	vector<Afficheur*> afficheurs;

public:
	Robot(int x=0,int y=0, Plot p=Plot(0),Objet o=Objet(0),char d = 'S', EtatRobot* e = EtatRobot::getPremier(),Afficheur* a = NULL):
		position(Position(x,y)),
		plot(p),
		etat(e),
		objet(o),
		direction(d),
		afficheurs(2,a)
		{};

	void avancer(int n);

	void tourner(char dir);

	void saisir(Objet o);

	void poser();

	int peser();

	void rencontrerPlot(Plot p);

	int evaluerPlot();

	void figer();

	void repartir();

	void notify();

	void addObserver(Afficheur* a);

	EtatRobot* getEtat(){return etat;};
	Position* getPosition(){return &position;};
	Plot* getPlot(){return &plot;};
	Objet* getObjet(){return &objet;};
	char getDirection(){return direction;};
};

#endif