#ifndef _COMMANDE_ROBOT_H_
#define _COMMANDE_ROBOT_H_

#include "Robot.h"
#include "Commande.h"

#include <string>
#include <vector>
#include <stack>
#include <map>
#include <iostream>

class LecteurCommande;

class CommandeRobot : public Commande {

public:
	Robot* robot;

	CommandeRobot(string s, Robot* r = nullptr): Commande(s){
		robot = r;
	}
};

#endif