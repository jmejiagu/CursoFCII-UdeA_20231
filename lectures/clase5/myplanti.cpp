#include <iostream>
#include "planti.h" // incluye la definición de la plantilla de función maximo

using namespace std;

int main()
{
  // demuestra la función maximo con valores int
  int int1, int2, int3;
  
  cout << "Introduzca tres valores enteros: ";
  cin >> int1 >> int2 >> int3;
  
  // invoca a la versión int de maximo
  cout << "El valor int de maximo es: " << maximo( int1, int2, int3 );
  
  // demuestra la función maximo con valores double
  double double1, double2, double3;
  cout << "\n\nIntroduzca tres valores double: ";
  cin >> double1 >> double2 >> double3;
  
  // invoca a la versión double de maximo
  cout << "El valor double de maximo es: "<< maximo( double1, double2, double3 );
  
  // demuestra la función maximo con valores char
  char char1, char2, char3;
  cout << "\n\nIntroduzca tres caracteres: ";
  cin >> char1 >> char2 >> char3;
  
  // invoca a la versión char de maximo
  cout << "El valor char de maximo es: " << maximo( char1, char2, char3 ) << endl;
  
  return 0;
} 
