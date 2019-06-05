#include <iostream>
#include <stdlib.h>

using namespace std;

void trouverElement (int tab[] ,int nbe , int cle){
	int droit,gauche,median,inf,sup,i;
	bool trouver,inc;
	inc=0;
	inf=0;
	sup=nbe;
	droit=sup;
	gauche=inf;
	i=((droit+gauche)/2);
	trouver=inc;

	if (tab[i]==cle){
		trouver=true;
		cout << "Elément trouvé à la position " << i << endl;
	}
	while((gauche <= droit) && (trouver == false)){
		median = (droit + gauche)/2;
		if (tab[median] == cle){
			trouver = true;
			cle = median ;
			cout << "Elément trouvé à la position \n" << median + 1 << endl;
		}
		else{
			if (tab[median] < cle){
				gauche = median+1;
			}
			else{
				droit = median-1;
			}
		}
	}
	if ( trouver == false ){
	cout << " Elément recherché non trouvé \n " << endl ;
	}
	
}

int main (){
	system("clear");
	int nbe, cle;
	cout << "Entrez la taille du tableau \n";
	cin >> nbe;
	system("clear");
	int i,j;
	int tab[nbe];
	for (i = 0; i < nbe; i++){
		do{
			for (int j = 0; j <= i-1; j++){
				system("clear");
				cout << tab[j] << "|" ;
			}
			cout << "Entrez l'element  " << i << "  du tableau \n" <<  endl;
			cin >> tab[i];
		}while(tab[i] < tab[i-1]);
	}
	system("clear");
	cout <<"\t Tableau final \n" <<endl;
	for (int j = 0; j < nbe; j++){
		cout << tab[j] << "|";
	}
	cout << "\n \t END \n" << endl;
	cout << "\t Entrez l'élément que vous souhaiter trouver \n";
	cin >> cle;
	trouverElement(tab,nbe,cle);
	return 0;
}