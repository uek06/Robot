#include "Commande.h"

map<string, Commande*>& Commande::commandes(){
	static map<string, Commande*>* buffMap = new map<string, Commande*>;
  	return *buffMap;
}

stack<Commande*>& Commande::pile(){
	static stack<Commande*>* buffStack = new stack<Commande*>;
  	return *buffStack;
}

Commande * Commande::newCommande(string s, Robot* r, LecteurCommande* lc){
	return commandes()[s]->constructeurVirtuel(r,lc);
}

Commande * Commande::constructeurVirtuel(Robot* r, LecteurCommande* lc){
	throw ErreurCommandeException();
}

void Commande::execute() {
	// TODO - implement Commande::execute
	throw "Not yet implemented";
}
