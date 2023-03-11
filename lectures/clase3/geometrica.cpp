// programa para desplegar la serie geometrica
// a + ar + ar 2 + ar 3 +  ̇  ̇  ̇ + ar n – 1   esto debe converger a 2   para a=1 y r=1/2

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double a, r;
  int j;
  double total;
  int limit;

  a = 1.0; r = 0.5;
  total = 0;
  j = 0;
  
  cout << "Ingrese el límite de la serie: ";
  cin >> limit;
  

  while (j < limit)
    {
      total = total + a*pow(r,j);
      j++;    
    }

  cout << "la suma de la serie geometrica es: " << total << endl;

  return 0;

}
