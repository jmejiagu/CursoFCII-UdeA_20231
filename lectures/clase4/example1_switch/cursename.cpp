// LibroCalificar.cpp
// utiliza una instrucción switch para contar calificaciones A, B, C, D y F.
#include <iostream>
using namespace std;

#include "cursename.h"

// inicializa los miembros de datos contadores a 0
LibroCalificar::LibroCalificar( string nombre )
{
  establecerNombreCurso( nombre ); 
  aCuenta = 0;
  bCuenta = 0; 
  cCuenta = 0; 
  dCuenta = 0; 
  fCuenta = 0; 
} 

void LibroCalificar::establecerNombreCurso( string nombre )
{
  if ( nombre.length() <= 25 ) 
    nombreCurso = nombre; 
  else 
    { 
      nombreCurso = nombre.substr( 0, 25 ); 
      cout << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
	   << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
    } 
}

string LibroCalificar::obtenerNombreCurso()
{
  return nombreCurso;
}

void LibroCalificar::mostrarMensaje()
  {

cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!\n" << endl;
}


// recibe un número arbitrario de calificaciones del usuario; actualiza el contador de calificaciones
void LibroCalificar::recibirCalificaciones()
{
  int calificacion; // calificación introducida por el usuario
  cout << "Escriba las calificaciones de letra." << endl
       << "Escriba el caracter EOF para terminar la entrada." << endl;
  
  // itera hasta que el usuario escriba la secuencia de fin de archivo (ctr d, ctr z....)
  while ( ( calificacion = cin.get() ) != EOF )
    {
      // determina cuál calificación se introdujo
      switch ( calificacion ) // instrucción switch anidada en el while
	{
	case 'A': // calificación fue A mayúscula
	case 'a': // or a minúscula
	  aCuenta++; // incrementa aCuenta
	  break; // es necesario salir del switch
	  
	case 'B':
	case 'b': 
	  bCuenta++; 
	  break; 
	  
	case 'C': 
	case 'c': 
	  cCuenta++; 
	  break; 
	  
	case 'D': 
	case 'd': 
	  dCuenta++; 
	  break; 
	  
	case 'F': 
	case 'f': 
	  fCuenta++; 
	  break; 
	  
	case '\n': // ignora caracteres de nueva línea,
	case '\t': // tabuladores
	case ' ': // y espacios en la entrada
	  break; 

	default: // atrapa todos los demás caracteres
	  cout << "Se introdujo una letra de calificación incorrecta."
	       << " Escribe una nueva calificación." << endl;
	  break; 
	} 
    } 
}
	  
// muestra un reporte con base en las calificaciones introducidas por el usuario
void LibroCalificar::mostrarReporteCalificaciones()
{
  // imprime resumen de resultados
  cout << "\n\nNumero de estudiantes que recibieron cada calificacion de letra:"
       << "\nA: " << aCuenta // muestra el número de calificaciones A
       << "\nB: " << bCuenta 
       << "\nC: " << cCuenta 
       << "\nD: " << dCuenta 
       << "\nF: " << fCuenta 
       << endl;
} 
