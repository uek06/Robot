#ifndef _COMMANDE_ANNULER_H_
#define _COMMANDE_ANNULER_H_


#include <string>
#include <iostream>

#include "Commande.h"

using namespace std;

class CommandeAnnuler : public Commande {

private:
	static CommandeAnnuler *instance;
public:

    CommandeAnnuler(LecteurCommande * lect = nullptr):Commande("ANNULER"){
    	lc = lect;
    }

    bool reversible(){
    	return false;
    }
	void execute();
	void desexecute();

	Commande * constructeurVirtuel(LecteurCommande * lect);

	
};

#endif