#include <iostream>
using namespace std;

int cuadrado( int ); 
int main()
{
int a = 10; // valor para cuadrado (variable local automática en main)
 
cout << a << " al cuadrado: " << cuadrado( a ) << endl; // muestra a al cuadrado
 
return 0; 
 
}

// devuelve el cuadrado de un entero
int cuadrado( int x ) // x es una variable local
{
return x * x; // calcula el cuadrado y devuelve el resultado
}
