// Cursoname03_10.cpp
// Incluyendo la clase LibroCalificar del archivo Cursoname.h

//#include <iostream>
//using namespace std;

#include "Cursoname.h" // include definition of LibroCalificar

int main()
{
   // create two LibroCalificar objects
   LibroCalificar gradeBook1( "Introduction to C++ Programming" );
   LibroCalificar gradeBook2( "metodos computacionales II" );

   //Mostrar el valor inicial de courseName para cada LibroCalificar.
   cout << "libroCalificar1 creado para el  curso: " << gradeBook1.getCourseName()
      << "\nlibroCalificar2 creado para el  curso: " << gradeBook2.getCourseName() 
      << endl;
   return 0; 
} // end main

