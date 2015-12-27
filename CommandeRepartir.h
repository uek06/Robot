#ifndef _COMMANDE_REPARTIR_H_
#define _COMMANDE_REPARTIR_H_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeRepartir : public CommandeRobot {

public:

    CommandeRepartir(Robot* r = nullptr, LecteurCommande * lect = nullptr):CommandeRobot("REPARTIR"){
    	robot = r;
    	lc = lect;
    }

    
	void execute();
	void desexecute();

	Commande * constructeurVirtuel(LecteurCommande * lect);

	
};

#endif