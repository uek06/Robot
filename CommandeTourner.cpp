#include "CommandeTourner.h"


void CommandeTourner::execute(){
	if (dir != ""){
		prevDir = dir;
	}
	
	string tmpDirection = lc->getDirection("Donner la direction (N, E, S ou O) : ");
    robot->tourner(tmpDirection);

    dir = tmpDirection;
}

void CommandeTourner::desexecuter(){
	this->robot->tourner(this->prevDir);
    pile().pop();
}

Commande * CommandeTourner::constructeurVirtuel(LecteurCommande* lect){
	CommandeTourner* cmd = new CommandeTourner(robot,lect);
	cmd->prevDir = dir;
    cmd->dir = dir;
    pile().push(cmd);
	return cmd;
}

