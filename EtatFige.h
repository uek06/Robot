#ifndef _ETAT_FIGE_H_
#define _ETAT_FIGE_H_

#include "EtatRobot.h"
class EtatEnRoute;
using namespace std;


class EtatFige : EtatRobot {

private:
	EtatEnRoute* etatPrecedent;
	static EtatFige* inst;

public:
	EtatRobot* repartir();

	void setEtatPrecedent(EtatEnRoute*);

	String getNom();

	EtatFige* getSingleton();
};
