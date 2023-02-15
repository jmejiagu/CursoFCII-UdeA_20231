// LibroCalificar.cpp
#include <iostream>
using std::cout; 
using std::endl;

#include "Cursoname.h" 

LibroCalificar::LibroCalificar( string name )
{
   setCourseName( name ); 
} 

// asegura que el nombre del curso tiene como máximo 25 caracteres
void LibroCalificar::setCourseName( string name )
{
   if ( name.length() <= 25 ) 
      courseName = name; 

   if ( name.length() > 25 ) 
   { 
      courseName = name.substr( 0, 25 ); // start at 0, length of 25

      cout << "Nombre \"" << name << "\" excede la longitud máxima (25).\n"
         << "Limitando el nombre del curso a los primeros 25 caracteres.\n" << endl;
   } 
} 

string LibroCalificar::getCourseName()
{
   return courseName; 
} 

void LibroCalificar::displayMessage()
{
  cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() 
      << "!" << endl;
} 

