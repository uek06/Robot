#include "CommandePeser.h"

void CommandePeser::execute() {
	robot->peser();
}

void CommandePeser::desexecute(){

}

Commande* constructeurVirtuel(LecteurCommande* lc){
	return new CommandePeser(robot,lc);
}
