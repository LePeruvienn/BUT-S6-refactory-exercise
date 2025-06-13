#include "fonctions.h"

int somme(const vector<int> &tab){
	int s=0;
	for(int k=0;k<NBARTEFACT;k++)  s+=tab[k];
	return s;
}

bool verif(const vector<int> &c){
	
	int s=somme(QUANTITE);
	if (s != c.size()) return false;

	vector<int> compte (c.size(),0);
	int i=0;
	bool ok = true;
	while (ok && i<c.size()){
		if(c[i]>=NBARTEFACT) ok=false;
		if(c[i]<0) ok=false;
		compte[c[i]]++;
		if (compte[c[i]]> QUANTITE[c[i]]) ok=false;
		i++;
	}
	return ok;
}

void affiche(const vector<int> &c,const vector<int> &j1,const vector<int> &j2,int i1, int i2, int tour){
	cout<<"\n\n\t<*> Le sentier <*>\n";
	int k,l;
	switch(tour){
		case(1): k=i1-c.size()+1; break;
		case(2): k=i2-c.size()+1; break;
		default : k=1;
	}


	if (c.size()==i1)
		if(c.size()==i2) cout << "Joueur 1&2   |  ";
		else cout << "Joueur 1   |  ";
	else
		if (c.size()==i2) cout << "Joueur 2   |  ";

	for(int i=c.size()-1; i>=0; i--){
		cout <<"["<< (k>0?k:0) <<"] ";
		k++;
		if (i==i1)
			if(i==i2) cout << "Joueur 1&2   |  ";
			else cout << "Joueur 1   |  ";
		else
			if (i==i2) cout << "Joueur 2   |  ";
			else {cout << ARTEFACT[c[i]]; if (c[i]!=VIDE) cout<<" ("<<VALEUR[c[i]]<<")"; cout<<"  |  ";}
		l=5;
		if ((c.size()-i)%l==l-1) cout <<endl;
	}
	cout <<"\n\n";
	cout << "\n\tSac";
	cout <<"\t_1_ \t_2_" <<endl;
	for(int k=1; k<NBARTEFACT; k++)
		cout << ARTEFACT.at(k) << "\t\t " << j1[k]<<"\t "<<j2[k]<<endl;
	cout <<"\n\n\n";
}

int score (const vector<int> &j,const vector<int> &adv){
	int s=0;
	for(int i=0; i < j.size(); i++){
		if(j[i]>adv[i]) s+=VALEUR[i];}
	return(s);
}

void supprime(vector<int> &tab, int n){
	for(int i=0;i<n;i++) tab.pop_back();
}

void joueur1(vector<int> &sentier,const vector<int>& Valeur,vector<int> &j1,const vector<int> &j2,int &i1, int i2){

	int n;
	do{
		cout << "le joueur 1 avance de combien de case ?\t";
		cin >> n;
	} 

	while(n<0 || n>i1);
		 i1-=n;

	if (sentier[i1]>0) j1[sentier[i1]]++;

	sentier[i1]=VIDE;

	int i=(i1>i2?i1:i2);

	supprime(sentier,sentier.size()-i);
}
