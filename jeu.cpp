#include "jeu.h"
#include "constantes.h"
#include "fonctions.h"

namespace Jeu {

	// Initialization du sentier du jeu
	std::vector<int> sentier = {6,1,3,1,2,4,1,3,5,1,2,1,2,3,1,4,2};

	bool ok;

 	int pos1;
	std::vector<int> sac1(NBARTEFACT, 0);

	int pos2;
	std::vector<int> sac2(NBARTEFACT, 0);

	void init() {

		ok = verif(sentier);

		int depart =  somme(QUANTITE);

		pos1 = depart;
		pos2 = depart;
	}
}

