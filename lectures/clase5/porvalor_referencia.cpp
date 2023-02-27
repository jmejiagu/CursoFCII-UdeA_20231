#include <iostream>
using std::cout;
using std::endl;

int cuadradoPorValor( int ); // prototipo de función (paso por valor)
void cuadradoPorReferencia( int & ); // prototipo de función (paso por referencia)

int main()
{
  int x = 2; // valor para cuadrado usando cuadradoPorValor
  int z = 4; // valor para cuadrado usando cuadradoPorReferencia
  
  // demuestra cuadradoPorValor
  cout << "x = " << x << " antes de cuadradoPorValor\n";
  cout << "Valor devuelto por cuadradoPorValor: "
       << cuadradoPorValor( x ) << endl;
  cout << "x = " << x << " despues de cuadradoPorValor\n" << endl;

  // demuestra cuadradoPorReferencia
  cout << "z = " << z << " antes de cuadradoPorReferencia" << endl;
  cuadradoPorReferencia( z );
  cout << "z = " << z << " despues de cuadradoPorReferencia" << endl;
  return 0; 
}


int cuadradoPorValor( int numero )
{
  return numero *= numero; // no se modificó el argumento de la función que hizo la llamada
}

// cuadradoPorReferencia multiplica a refNumero por sí solo y almacena el resultado
// en la variable a la que refNumero hace referencia en la función main
void cuadradoPorReferencia( int &refNumero )
{
  refNumero *= refNumero; // se modificó el argumento de la función que hizo la llamada
} 
