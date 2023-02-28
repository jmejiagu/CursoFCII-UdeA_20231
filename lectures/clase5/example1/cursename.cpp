#include <iostream>

#include "cursename.h"

using namespace std;

LibroCalificar::LibroCalificar( string nombre )
{
  establecerNombreCurso( nombre ); 
  calificacionMaxima = 0; // este valor se reemplazará por la calificación máxima
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
 int calificacion1; // primera calificación introducida por el usuario
 int calificacion2; 
 int calificacion3; 
  
 cout << "Introduzca tres calificaciones enteras: ";
 cin >> calificacion1 >> calificacion2 >> calificacion3;
 // almacena el valor máximo en el miembro calificacionMaxima
 calificacionMaxima = maximo( calificacion1, calificacion2, calificacion3 );
} 

// devuelve el máximo de sus tres parámetros enteros
int LibroCalificar::maximo( int x, int y, int z )
{
  int valorMaximo = x; // supone que x es el mayor para empezar
  
  // determina si y es mayor que valorMaximo
  if ( y > valorMaximo )
    valorMaximo = y; 
  
  if ( z > valorMaximo )
    valorMaximo = z; 
  
  return valorMaximo;
}

void LibroCalificar::mostrarReporteCalificaciones()
{
// imprime el máximo de las calificaciones introducidas
cout << "Calificacion maxima introducida: " << calificacionMaxima << endl;
} 
