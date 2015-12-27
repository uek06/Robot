#ifndef _COMMANDE_RENCONTRER_H_
#define _COMMANDE_RENCONTRER_H_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeRencontrerPlot : public CommandeRobot {

public:

    CommandeRencontrerPlot(Robot* r = nullptr, LecteurCommande * lect = nullptr):CommandeRobot("RENCONTRERPLOT"){
    	robot = r;
    	lc = lect;
    }

    bool isCancellable(){
    	return false;
    }
	void execute();
	void desexecute();

	Commande * constructeurVirtuel(LecteurCommande * lect);
	
	
};

#endif