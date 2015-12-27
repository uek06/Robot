#include "CommandeFiger.h"

void CommandeFiger::execute() {
	robot->figer();
}

void CommandeFiger::desexecute(){
	robot->repartir();
	pile().pop();
}

Commande* CommandeFiger::constructeurVirtuel(LecteurCommande* lc){
	Commande* cmd = new CommandeFiger(robot, lc);
	pile().push(cmd);
	return cmd;
}
