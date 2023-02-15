// Cursoname03_05.cpp
// defina la clase que contiene un miembro que es el nombre del curso.
// Ademas, funciones para setear y conseguir el nombre
#include <iostream>
#include <string> 

using namespace std;

class LibroCalificar
{
public:

   //Función que establece el nombre del curso.
   void setCourseName( string name )
   {      
      courseName = name; //guarde el nombre del curso en el objeto
   } 
   
   // función que obtiene el nombre del curso
   string getCourseName() 
   {
      return courseName; //devuelve el nombre del curso del objeto
   } 

   //Función que muestra un mensaje de bienvenida.
   void displayMessage()
   {
     // esta declaración llama a getCourseName para obtener el Nombre del curso
     cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() << "!" << endl;
   } 
private:
   string courseName; // nombre del curso para este LibroCalificar
}; 

int main()
{
   string nameOfCourse; 
   LibroCalificar myLibroCalificar; 
   
   cout << "El nombre inicial del curos es: " << myLibroCalificar.getCourseName()  << endl;

   cout << "\nPlease enter the course name:" << endl;
   getline( cin, nameOfCourse ); 
   myLibroCalificar.setCourseName( nameOfCourse ); //establecer el nombre del curso

   cout << endl; 
   myLibroCalificar.displayMessage(); // mensaje de pantalla con el nuevo nombre del curso
   return 0; 
} 

