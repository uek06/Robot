#ifndef _COMMANDE_AVANCER_
#define _COMMANDE_AVANCER_


#include <string>
#include <iostream>

#include "CommandeRobot.h"

using namespace std;

class CommandeAvancer : public CommandeRobot {

private:
	int x;
	int y;
	int prevX = 0;
	int prevY = 0;
public:

    CommandeAvancer(Robot* r = nullptr, LecteurCommande * lect = nullptr):CommandeRobot("AVANCER"){
    	robot = r;
    	lc = lect;
    	x = r->getPosition().getX();
		y = r->getPosition().getY();
    }

    
	void execute();
	void desexecute();

	Commande * constructeurVirtuel(LecteurCommande * lect);

	
};

#endif