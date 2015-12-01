#ifndef _COMMANDE_H_
#define _COMMANDE_H_

class LecteurCommande;
class Commande {

public:
	Robot* r;
	LecteurCommande* lc;

	static map<string, Commande*>& commandes();
	static stack<Commande*>& pile();


	Commande(string s){
		commandes()[s] = this;
	}



	virtual void execute();
	//virtual void desexecuter();

	static Commande* newCommande(string s, Robot* r, LecteurCommande* lc);
	virtual Commande* constructeurVirtuel(Robot* r, LecteurCommande* lc;

	void execute();
};

#endif