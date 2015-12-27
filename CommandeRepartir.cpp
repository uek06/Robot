#include "CommandeRepartir.h"


void CommandeRepartir::execute(){
    robot->repartir();
}

void CommandeRepartir::desexecute(){
	robot->figer();
	pile().pop();

}

Commande * CommandeRepartir::constructeurVirtuel(LecteurCommande * lect){
	Commande* cmd = new CommandeRepartir(robot,lect);
    pile().push(cmd);
	return cmd;
}
