#include "CommandePoser.h"

void CommandePoser::execute() {
	this->obj = this->robot->getObjet();
	robot->poser();
}

void CommandePoser::desexecute(){
	this->robot->saisir(this->obj);
	pile().pop();
}

Commande* constructeurVirtuel(LecteurCommande* lc){
	Commande* cmd= new CommandePoser(robot,lc);
	pile().push(cmd);
	return cmd;
}
