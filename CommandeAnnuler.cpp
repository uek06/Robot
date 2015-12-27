#include "CommandeAnnuler.h"

CommandeAnnuler* CommandeAnnuler::instance = new CommandeAnnuler;



void CommandeAnnuler::execute(){
	if (pile().size() == 0){
        cout << "Rien à annuler." << endl;
    } else if (pile().size() > 0){
            pile().top()->desexecute();
    } 
}

void CommandeAnnuler::desexecuter(){
	
}

Commande * CommandeAnnuler::constructeurVirtuel(LecteurCommande * lect){
	return new CommandeAnnuler(lect);
}

