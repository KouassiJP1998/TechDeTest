#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

double f(double a){
  if (a==0){
    return 1;
   }
    return (sin(a)/a);
}


double Simpson(double a, double b){

int N = 10000;
// paramètre de précision

double sum = 0.0;
double h =(b-a)/(N-1);

// pas d’intégration
// terme en 1/3

sum =1.0/3.0* (f(a)+f(b));

// terme en 4/3

for (int i=1; i<N-1; i=i+2)
sum =sum + 4.0 / 3.0 *f(a+h*i);

// terme en 2/3
for (int i=2; i< N-1; i=i+2)
sum = sum+ 2.0/3.0 *f( a+h*i);

//Résultat
return sum*h;
}

int main(){
  system("clear");
  cout << "Les valeurs entrées sont uniquement dans l'intervalle [0:PI] . " << endl;
  cout << " \n" ;
  cout << "La valeur suivante est testée avec 0 et PI comme arguments ." << endl;
  cout << " \n" ;
  cout << "Simpson :  " << Simpson(0,M_PI) << endl;
  cout << " \n" ;
}
