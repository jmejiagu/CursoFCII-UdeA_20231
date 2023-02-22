/*
Asignar a total el valor de cero
Asignar al contador de calificaciones el valor de uno

Mientras que el contador de calificaciones sea menor o igual a diez
   Pedir al usuario que introduzca la siguiente calificación
   Obtener como entrada la siguiente califi cación
   Sumar la califi cación al total 
   Sumar uno al contador de califi caciones

Asignar al promedio de la clase el total dividido entre diez
Imprimir el total de las califi caciones para todos los estudiantes en la clase
Imprimir el promedio de la clase
 */



#include <iostream>
#include "cursename.h"

using namespace std;


LibroCalificar::LibroCalificar( string nombre )
{
  establecerNombreCurso( nombre ); 
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
  cout << "Bienvenido al libro de calificaciones para \n" << obtenerNombreCurso() << "!\n"
       << endl;
} 

// determina el promedio de la clase, con base en las 10 calificaciones escritas por el usuario
void LibroCalificar::determinarPromedioClase()
{
  float total; // suma de las calificaciones introducidas por el usuario
  int contadorCalif; // número de la calificación a introducir a continuación
  float calificacion; // el valor de la calificacion introducida por el usuario
  int promedio; // promedio de calificaciones
  
  total = 0; 
  contadorCalif = 1;
  
  // fase de procesamiento
  while ( contadorCalif <= 10 ) 
    {
      cout << "Escriba una calificacion: "; 
      cin >> calificacion;
      total = total + calificacion; 
      contadorCalif = contadorCalif + 1;
    }

  
  promedio = total / 10; // la división de enteros produce un resultado entero
  // muestra el total y el promedio de las calificaciones
  cout << "\nEl total de las 10 calificaciones es " << total << endl;
  cout << "El promedio de la clase es " << promedio << endl;
} 
