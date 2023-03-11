// seno.cpp
// este codigo aproxima a la serie de la funcion seno de tres formas
// 1. usa la funcion gamma de las librerias standar, donde gamma(n) = (n-1)!
// 2. crea una funcion "fact" que calcula el factorial de cualquier numero
// 3. crea una funcion "factorial" que calcula el factorial de cualquier numero usando la recursividad

#include<iostream>
#include<iomanip>
#include<cmath>

unsigned long factorial( unsigned long ); // prototipo de función

// Esta funcion calcula el factorial de un numero
int fact (int num)
{
  int mm = 1;
  double factorial = 1;

  if (num == 0){ factorial=1; }
  else{
    
    while(mm<=num){
      factorial*=mm;
      mm++;
    }
    
  }

  return factorial;

} // end fact function

using namespace std;

int main()
{ 
  const double PI = 3.1416;
  const double GRAD_A_RAD = PI/180.0;

  double x = 30.0 * GRAD_A_RAD;
  int jj  = 0;

  double diff{0};
  double mysin = 0;
  
  cout << "seno de 30 grados es: " << sin(x) << endl;
  cout << "el fatorial se calcula con la funcion gamma, donde gamma(n) = (n-1)! " << endl;
  cout << "el factorial de 4 es: " << tgamma (5) << endl;
  cout << " " << endl;

  
  while (jj<4)
    {
      int sing = pow(-1,jj);
      //cout << "el signo para el termino: " << jj << " es: " << pow(-1,jj) << endl;
      //cout << "el factorial para el termino: " << jj << " ques es: " << (2*jj+1) << " es: " << tgamma(2*jj+1+1) << endl;
      //cout << " " << endl;
      
      mysin = mysin + sing*(pow(x,2*jj+1)/tgamma(2*jj+1+1));      
      
      diff = abs(mysin - sin(x));
      cout << "el seno para el termino: " << jj << " es: " << mysin << endl;
      cout << "La diferencia en el termino: " << jj << " es: " << diff << endl;
      cout << " " << endl;

      jj++;
      
    }
  
  
  // en este paso usamos la funcion fact que creamos arriba
  /*
  while (jj<4)
    {
      int sing = pow(-1,jj);
      
      mysin = mysin + sing*(pow(x,2*jj+1)/fact(2*jj+1));      
      
      diff = abs(mysin - sin(x));
      cout << "el seno para el termino: " << jj << " es: " << mysin << endl;
      cout << "La diferencia en el termino: " << jj << " es: " << diff << endl;
      cout << " " << endl;
      
      jj++;
      
    }
  */
  
  // en este paso usamos la funcion factorial que creamos abajo
  /*
  while (jj<4)
    {
      int sing = pow(-1,jj);
      
      mysin = mysin + sing*(pow(x,2*jj+1)/factorial(2*jj+1));      
      
      diff = abs(mysin - sin(x));
      cout << "el seno para el termino: " << jj << " es: " << mysin << endl;
      cout << "La diferencia en el termino: " << jj << " es: " << diff << endl;
      cout << " " << endl;
      
      jj++;
      
    }
  */
  
  return 0;

}
  
unsigned long factorial( unsigned long numero )
{
  if ( numero <= 1 ) // evalúa el caso base
    return 1; // casos base: 0! = 1 y 1! = 1
  else // paso recursivo
    return numero * factorial( numero - 1 );
}
