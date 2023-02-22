
#include <iostream>
#include <iomanip> 
#include <string> 
    
using namespace std;
    
class LibroCalificar
{
 public :
       
  LibroCalificar( string ); 
  void establecerNombreCurso( string );      
  string obtenerNombreCurso();   
  void mostrarMensaje(); 
  void determinarPromedioClase();
  
  private :     
  string nombreCurso;
};
