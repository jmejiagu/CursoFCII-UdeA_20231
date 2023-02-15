// Cursoname03_03.cpp
// Defina la clase LibroCalificar con una función miembro que toma un parámetro;

#include <iostream>
#include <string> 

using namespace std;

class LibroCalificar
{
public:
   // Función que muestra un mensaje de bienvenida al usuario de LibroCalificar.
   void MostrarMensaje( string courseName )
   {
      cout << "Bienvendo al libro de calificaciones para\n" << courseName << "!" 
         << endl;
      return; 
   } 
};  

// función principal comienza la ejecución del programa
int main()
{
   string nameOfCourse; 
   LibroCalificar myLibroCalificar; // Crea un objeto LibroCalificar llamado myLibroCalificar
   
   // pregunta por un nombre para el curso
   cout << "Please enter the course name:" << endl;
   getline( cin, nameOfCourse ); // NOTABENE: leer el nombre de un curso con espacios en blanco
   cout << endl; // sacar una línea en blanco

   // llame la funcion MostrarMensaje.   Pase nameOfCourse como un argumento
   myLibroCalificar.MostrarMensaje( nameOfCourse );
   
   return 0; 
} 
