#ifndef _COMMANDE_FIGER_
#define _COMMANDE_FIGER_

#include <string>
#include <iostream>

using namespace std;

class CommandeFiger : CommandeRobot {


public:
	CommandeFiger(Robot* r = nullptr, LecteurCommande* lect = nullptr):CommandeRobot("FIGER"){
		robot = r;
		lc = lect;
	}

	void execute();
	void desexecute();

	Commande* constructeurVirtuel(LecteurCommande lc);
};
