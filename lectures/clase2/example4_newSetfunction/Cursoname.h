// LibroCalificar.h
// Definición de la clase LibroCalificar. Este archivo presenta .
// interfaz publica sin revelar las implementaciones de los miembros de las
// funciones, que se definen en LibroCalificar.cpp.

#include <string> 
using std::string;

class LibroCalificar
{
public:
   LibroCalificar( string ); 
   void setCourseName( string ); 
   string getCourseName(); 
   void displayMessage(); 
private:
   string courseName; 
};  
