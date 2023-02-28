
#include <string> 
using std::string;

class LibroCalificar
{
public:
LibroCalificar( string ); 
void establecerNombreCurso( string ); 
string obtenerNombreCurso();
void mostrarMensaje(); 
void recibirCalificaciones();
void mostrarReporteCalificaciones(); // muestra un reporte con base en las calificaciones
int maximo( int, int, int ); // determina el máximo de 3 valores
 
private:
string nombreCurso; 
int calificacionMaxima; 

}; 
