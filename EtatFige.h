#ifndef _ETAT_FIGE_H_
#define _ETAT_FIGE_H_

#include "EtatRobot.h"
class EtatEnRoute;
using namespace std;


class EtatFige : public EtatRobot {

private:
	EtatEnRoute* etatPrecedent;
	static EtatFige* inst;

public:
	EtatRobot* repartir();

	void setEtatPrecedent(EtatEnRoute*);

	virtual string getNom();

	static EtatFige* getSingleton();
};

#endif