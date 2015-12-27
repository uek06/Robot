#ifndef _COMMANDE_SAISIR_H_
#define _COMMANDE_SAISIR_H_

#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeSaisir : public CommandeRobot {


public:
	CommandeSaisir(Robot* r = nullptr, LecteurCommande* lect = nullptr):CommandeSaisir("SAISIR"){
		robot = r;
		lc = lect;
	}

	void execute();
	void desexecute();

	Commande * constructeurVirtuel(LecteurCommande* lc);
};
#endif
