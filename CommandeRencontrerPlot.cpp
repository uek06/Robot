#include "CommandeRencontrerPlot.h"


void CommandeRencontrerPlot::execute(){
	int hauteur = invocateur->getInt("Hauteur du plot ? ");
	Plot plot(hauteur);
    robot->rencontrerPlot(plot);
}

void CommandeRencontrerPlot::desexecute(){
	
}

Commande * CommandeRencontrerPlot::constructeurVirtuel(LecteurCommande * lect){
	return new CommandeRencontrerPlot(robot, lect);
}
