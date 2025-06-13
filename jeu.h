#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED

#include <vector>

namespace Jeu {

	// Initialization du sentier du jeu
	extern std::vector<int> sentier;

	extern bool ok;

	extern int pos1;
	extern std::vector<int> sac1;

	extern int pos2;
	extern std::vector<int> sac2;


	void init();
}

#endif // JEU_H_INCLUDED
