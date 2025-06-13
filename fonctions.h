#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED
#include <iostream>
#include "constantes.h"
#include <vector>
using namespace std;

int somme(const vector<int> &tab);

bool verif(const vector<int> &sentier);

void affiche(const vector<int> &sentier,const vector<int> &sac1,const vector<int> &sac2,int pos1, int pos2, int tour);

int score (const vector<int> &sac,const vector<int> &adv);

void supprime(vector<int> &tab, int n);

void joueur1(vector<int> &sentier,const vector<int>& Valeur,vector<int> &sac1,const vector<int> &sac2,int &pos1, int pos2);

#endif // FONCTIONS_H_INCLUDED
