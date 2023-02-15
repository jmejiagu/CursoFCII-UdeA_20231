#include <iostream>

using namespace std;

//class definition
class LibroCalificar
{
public:
  
   void displayMessage()
   {
      cout << "Bienvendo al libro de calificaciones!" << endl;
   } 
};   

// función principal comienza la ejecución del programa
int main()
{
   LibroCalificar myLibroCalificar; 
   myLibroCalificar.displayMessage(); 	

   return 0; 
} 


