#include <iostream>
#include "joueurs.h"
#include "constantes.h"
#include "fonctions.h"
#include <vector>

using namespace std;

int main() {

	// Initialization du sentier du jeu
	vector<int> sentier = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};

	bool ok = verif(sentier);

	vector<int> sac1(NBARTEFACT,0);

	vector<int> sac2(NBARTEFACT,0);

	int pos1,pos2;

	pos1 = pos2 =somme(QUANTITE);
	
	//boucle principale
	while (ok){
		affiche(sentier,sac1, sac2, pos1, pos2,1);
		joueur1(sentier,VALEUR,sac1, sac2, pos1, pos2);

		affiche(sentier,sac1, sac2, pos1, pos2,2);
		joueur2(sentier,VALEUR,sac1, sac2, pos1, pos2);

		ok = pos1>0 || pos2>0;
	}
	affiche(sentier,sac1, sac2, pos1, pos2,0);

	cout << "le joueur 1 a le score de  "<< score(sac1,sac2)<<endl;
	cout << "le joueur 2 a le score de  "<< score(sac2,sac1)<<endl;
	return 0;
}
