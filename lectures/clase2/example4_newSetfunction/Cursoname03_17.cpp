// Cursoname03_16.cpp
#include <iostream>
using std::cout; 
using std::endl;

#include "Cursoname.h" 

int main()
{
   // cree dos objetos LibroCalificar; 
   // el nombre inicial de LibroCalificar1 es muy largo
   LibroCalificar LibroCalificar1( "C++2019-2 Introduction to Programming in C++" );
   LibroCalificar LibroCalificar2( "c++ computacionales II" );

   // mostrar el nombre de cada objeto
   cout << "LibroCalificar1 su nombre inicial es: " 
      << LibroCalificar1.getCourseName()
      << "\nLibroCalificar su nombre inicial es: " 
      << LibroCalificar2.getCourseName() << endl;

   // modicar LibroCalificar1 (con un string "valido")
   LibroCalificar1.setCourseName( "C++ Programming" );

   // mostrar el nombre de cada objeto 
   cout << "\nLibroCalificar1 su nombre inicial es: " 
      << LibroCalificar1.getCourseName()
      << "\nLibroCalificar2 su nombre inicial es: " 
      << LibroCalificar2.getCourseName() << endl;
   return 0; 
} 

