#include "joueurs.h"
#include "fonctions.h"

//niveau 3
void joueur2(vector<int> &sentier, const vector<int>& Valeur, const vector<int>&  j1,vector<int> &j2,int i1, int &i2){
	int n=(i2>0?1:0);
	int s=0;
	for(int k=1;k<=i2;k++){
		if ((Valeur[sentier.at(i2-k)]>s) && ( ((unsigned int) i2-n)>=sentier.size()|| Valeur[sentier.at(i2-k)]>Valeur[sentier.at(i2-n)]))  n=k;
		s+=Valeur[sentier[i2-n]];	}
	cout <<"le joueur 2 avance de "<<n<<endl;
	 i2-=n;
	 if (sentier[i2]!=-1) j2[sentier[i2]]++;
	 sentier[i2]=VIDE;
	 int i=(i1>i2?i1:i2);
	 supprime(sentier,sentier.size()-i);
}
//niveau2
void joueur3(vector<int> &sentier,const vector<int>& Valeur,const vector<int>& j1,vector<int> &j2,int i1, int &i2){
	int n=(i2>0?1:0);
	int s=0;
	for(int k=1;k<=4;k++){
		if (i2-k>=0 && (Valeur[sentier.at(i2-k)]>s)){
				n=k; s=Valeur[sentier[i2-n]];}
	}
	cout <<"le joueur 2 avance de "<<n<<endl;
	 i2-=n;
	 if (sentier[i2]!=-1) j2[sentier[i2]]++;
	 sentier[i2]=VIDE;
	 int i=(i1>i2?i1:i2);
	 supprime(sentier,sentier.size()-i);
}
//niveau1
void joueur4(vector<int> &sentier,const vector<int>& Valeur,const vector<int>&  j1,vector<int> &j2,int i1, int &i2){
	int n= rand() % i2;
	cout <<"le joueur 2 avance de "<<n<<endl;
	 i2-=n;
	 if (sentier[i2]!=-1) j2[sentier[i2]]++;
	 sentier[i2]=VIDE;
	 int i=(i1>i2?i1:i2);
	 supprime(sentier,sentier.size()-i);
}
