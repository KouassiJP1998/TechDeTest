#include <iostream>
#include <string>

using namespace std;

string constructeurTriangle(float long1,float long2,float long3){
	if ((long1 <= 0) | (long2 <= 0) | (long3 <= 0)){
		return "impossible"; //Cas impossible
	}
	else if ((long1 >= long2 + long3) | (long2 >= long1 + long3) | (long3 >= long2 + long1)){
		return "non triangle"; //Non-triangle
	}
	else if ((long1 == long2) & (long2 == long3)){
		return "équilatéral"; //triangle Equilateral
	}
	else if ((long1 == long2) | (long2 == long3) | (long1 == long3)){
		return "isocèle"; //Isocèle
	}
	else{
		return "scalène"; //Quelconque
	}
}

int main(){
	string verification;
	float entree, c1,c2,c3;
	cout << "Entrez les longueurs de vos 3 cotes : \n" << endl;

	cout << "Longueur du premier côté :" << endl;
	cin >> c1;
	cout << "Longueur du second côté :" << endl;
	cin >> c2;
	cout << "Longueur du troisième côté :" << endl;
	cin >> c3;

	verification = constructeurTriangle(c1, c2, c3);
	cout << "Le triangle est de type : " << verification << "." << endl;
}