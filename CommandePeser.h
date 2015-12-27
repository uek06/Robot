#ifndef _COMMANDE_PESER_H_
#define _COMMANDE_PESER_H_

#include <string>
#include <iostream>

class CommandePeser : CommandeRobot {

private:
	static CommandePeser *instance;

public:
	CommandePeser(Robot* r = nullptr, LecteurCommande *lect = nullptr):Commande("PESER"){
		robot = r;
		lc = lect;
	}


	void execute();
	void desexecute();

	Commande* constructeurVirtuel(LecteurCommande* lc);
};

#endif