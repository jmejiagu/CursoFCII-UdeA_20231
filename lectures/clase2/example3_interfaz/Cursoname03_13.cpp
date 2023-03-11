// Cursoname03_13.cpp
// Demostración de la clase LibroCalificar después de separar
// su interfaz desde su implementación.
#include <iostream>
using namespace std;

#include "Cursoname.h" // incluye la definicion de la clase

int main()
{
  // crea dos  objectos LibroCalificar
   LibroCalificar gradeBook1( "Introduction to C++ Programming" );
   LibroCalificar gradeBook2( "metodos computacionales II" );

   //Mostrar el valor inicial de courseName para cada LibroCalificar.
   cout << "libroCalificar1 creado para el  curso: " << gradeBook1.getCourseName()
      << "\nlibroCalificar2 creado para el  curso: " << gradeBook2.getCourseName() 
      << endl;
   return 0; 
} 

