// LibroCalificar.cpp
// Definiciones de funciones de miembro de LibroCalificar. Este archivo contiene
// Implementaciones de las funciones miembro prototipadas en LibroCalificar.h.
#include <iostream>
using namespace std;

#include "Cursoname.h" // include definition of class LibroCalificar

LibroCalificar::LibroCalificar( string name )
{
   setCourseName( name ); //llamar a la función set para inicializar courseName
} 

void LibroCalificar::setCourseName( string name )
{
   courseName = name; //guarde el nombre del curso en el objeto
} 

string LibroCalificar::getCourseName()
{
   return courseName; //devuelve el nombre del curso del objeto
} 

void LibroCalificar::displayMessage()
{
   cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() 
      << "!" << endl;
}
