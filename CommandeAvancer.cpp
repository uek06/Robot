#include "CommandeAvancer.h"


void CommandeAvancer::execute(){
	prevX = x;
	prevX = y;

	//On utilise des varaibles temporaires a cause des Bad_state qui peuvent remonter
	int tmpX = lc->getInt("x = ");
	int tmpY = lc->getInt("y = ");
	robot->avancer(tmpX,tmpY);

	//On remplace les X et Y aprés avancer pour les cas où on a une exception
	x = tmpX;
	y = tmpY;
}

void CommandeAvancer::desexecute(){
	this->robot->avancer(prevX, prevY);
    pile().pop();
}

Commande * CommandeAvancer::constructeurVirtuel(LecteurCommande * lect){
	CommandeAvancer* cmd = new CommandeAvancer(robot, lect);
	cmd->x = x;
    cmd->y = y;
    pile().push(cmd);
	return cmd;
}

