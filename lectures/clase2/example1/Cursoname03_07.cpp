// Crea una instancia de múltiples objetos de la clase LibroCalificar y usando
// el constructor LibroCalificar para especificar el nombre del curso
#include <iostream>
#include <string> 

using namespace std;

class LibroCalificar
{
public:
   // el constructor inicializa courseName con una cadena suministrada como argumento
   LibroCalificar( string name )
   {
      setCourseName( name ); //llamar a la función set para inicializar courseName
   }
  
   void setCourseName( string name )
   {      
      courseName = name; 
   } 
   
   string getCourseName() 
   {
      return courseName; 
   }

   void displayMessage()
   {
     cout << "Bienvendo al libro de calificaciones para\n" << getCourseName() << "!" 
         << endl;
   } 
private:
   string courseName; 
};   

int main()
{  /*string nameOfCourse1 = "Introduction to C++ Programming";
   string nameOfCourse2 = "metodos computacionales II";*/
   
   
   string nameOfCourse1;
   string nameOfCourse2;
   cout << "\nPlease enter the first course name:" << endl;
   getline( cin, nameOfCourse1 );
   cout<<endl;
   cout << "\nPlease enter the second course name:" << endl;
   getline( cin, nameOfCourse2 );
   cout<<endl; 
   // create two LibroCalificar objects
   LibroCalificar gradeBook1( nameOfCourse1 );
   LibroCalificar gradeBook2( nameOfCourse2 );

   //Mostrar el valor inicial de courseName para cada LibroCalificar.
   cout << "libroCalificar1 creado para el  curso: " << gradeBook1.getCourseName()
      << "\nlibroCalificar2 creado para el  curso: " << gradeBook2.getCourseName() 
      << endl;
   return 0; 
} 
