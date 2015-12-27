#ifndef _INVOCATEUR_H_
#define _INVOCATEUR_H_

#include "Commande.h"

class LecteurCommande {

private:
	Robot* r;

public:
	LecteurCommande(Robot