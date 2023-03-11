// programa para desplegar la serie geometrica
// a + ar + ar 2 + ar 3 +  ̇  ̇  ̇ + ar n – 1   esto debe converger a 2   para a=1 y r=1/2

#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double a, r;
  int j;
  double total;

  a = 1.0; r = 0.5;
  total = 0;
  j = 0;
  
  for ( ; j<11 ; j++)
    {
      total = total + a*pow(r,j);
    }
  

  /*
  while (j < 11)
    {
      total = total + a*pow(r,j);
      j++;    
    }
  */

  cout << "la suma de la seri geometrica es: " << total << endl;

  return 0;

}
