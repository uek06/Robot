#include "CommandeSaisir.h"

void CommandeSaisir::execute() {
	int p = lc->getInt("Poids de l'objet à saisir ?");
	Objet obj(p);
	robot->saisir(obj);
}

void CommandeSaisir::desexecute(){
	robot->poser();
	pile().pop();
}

Commande* CommandeSaisir::constructeurVirtuel(LecteurCommande* lect){
	Commande* cmd = new CommandeSaisir(robot,lect);
	pile().push(cmd);
	return cmd;
}