// LibroCalificar.h
// Definición de la clase LibroCalificar en un archivo separado de main
#include <iostream> 
#include <string> 

using namespace std;

// LibroCalificar class definition
class LibroCalificar
{
public:
   LibroCalificar( string name )
   {
      setCourseName( name ); //llamar a la función set para inicializar courseName
   } 

   
   void setCourseName( string name )
   {      
      courseName = name; //guarde el nombre del curso en el objeto
   } 
   
   
   string getCourseName() 
   {
      return courseName; //devuelve el nombre del curso del objeto
   } 

   void displayMessage()
   {
     cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() << "!" 
         << endl;
   } 
private:
   string courseName; // course name for this LibroCalificar
}; 
