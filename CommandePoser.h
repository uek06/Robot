#ifndef _COMMANDE_POSER_H_
#define _COMMANDE_POSER_H_

#include <string>
#include <iostream>

using namespace std;

class CommandePoser : CommandeRobot {

private:
	static CommandePoser *instance;
	Objet obj;

public:
	CommandePoser(Robot* r = nullptr, LecteurCommande *lect = nullptr):Commande("POSER"){
		robot = r;
		lc = lect;
	}


	void execute();
	void desexecute();

	Commande* constructeurVirtuel(LecteurCommande* lc);
};

#endif