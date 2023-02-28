#include "cursename.h" 

int main()
{
  LibroCalificar miLibroCalificar( "CS101 Programacion en C++" );
  
  miLibroCalificar.mostrarMensaje(); // muestra el mensaje de bienvenida
  
  miLibroCalificar.recibirCalificaciones(); // lee las calificaciones del usuario
  
  miLibroCalificar.mostrarReporteCalificaciones(); // muestra el reporte con base enlas calificaciones
  
  return 0; 
} 
