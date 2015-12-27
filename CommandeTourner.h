#ifndef _COMMANDE_TOURNER_H_
#define _COMMANDE_TOURNER_H_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeTourner : public CommandeRobot {

private:
	string dir = "";
	string prevDir;
public:

    CommandeTourner(Robot* r = nullptr, LecteurCommande * lect = nullptr):CommandeRobot("TOURNER"){
    	robot = r;
    	lc = lect;
    	dir = r->getDirection();
    }

    
	void execute();
	void desexecute();
	
	Commande * constructeurVirtuel(LecteurCommande * lect);
	
};

#endif