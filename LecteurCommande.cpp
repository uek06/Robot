#include "LecteurCommande.h"
#include "Robot.h"

static vector<string> liste {"FIGER","REPARTIR","AVANCER","TOURNER","RENCONTRERPLOT","EVALUERPLOT","SAISIR","PESER","POSER"};

bool isCommande(string cmd){
	if(find(liste.begin(),liste.end(), cmd) != liste.end())
		return true;
	return false;
}

void LecteurCommande::readCommand(Robot *r) {
	cout << "------SIMULATION------" << endl;
	for(iterator cmd = liste.begin(); cmd != liste.end(); cmd++){
		cout << cmd << "|";
	}
	cout << endl;

	while(true){
		string commande;
		cout << "Entrez une commande:" << endl;
		cin >> commande;
		transform(commande.begin(),commande.end(),commande.begin(),::toupper());
		if(!isCommande(commande)){
			cout << "Cette commande n'existe pas." << endl;
		}
		else if(commande == "ANNULER"){

		}
		else{
			try{
				Commande *c = Commande::nouvelleCommande(commande, r, this);
				c->execute();
			}catch(EtatRobot::Wrong_State){
				cout << "Action impossible" << endl;
				Commande::pile().pop();
			}
		}
		cin.clear();
	}

}

