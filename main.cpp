#include <iostream>
#include "joueurs.h"
#include "constantes.h"
#include "fonctions.h"
#include "jeu.h"

using namespace Jeu;

int main() {

	// Intialization du jeu
	init();
	
	//boucle principale
	while (ok){

		affiche(sentier,sac1, sac2, pos1, pos2,1);
		joueur1(sentier,VALEUR,sac1, sac2, pos1, pos2);

		affiche(sentier,sac1, sac2, pos1, pos2,2);
		joueur2(sentier,VALEUR,sac1, sac2, pos1, pos2);

		ok = pos1>0 || pos2>0;
	}
	affiche(sentier,sac1, sac2, pos1, pos2,0);

	std::cout << "le joueur 1 a le score de  "<< score(sac1,sac2)<< std::endl;
	std::cout << "le joueur 2 a le score de  "<< score(sac2,sac1)<< std::endl;
	return 0;
}
