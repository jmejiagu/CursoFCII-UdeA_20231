// LibroCalificar.h
#include <iostream>
#include <string>

using namespace std;

class LibroCalificar
{
public:
LibroCalificar( string ); // el constructor
void establecerNombreCurso( string ); 
string obtenerNombreCurso();
void mostrarMensaje(); 
void recibirCalificaciones();
 
void mostrarReporteCalificaciones(); // muestra un reporte con base en las calificaciones
 
private:
string nombreCurso; // nombre del curso para este LibroCalificar
int aCuenta; // cuenta de calificaciones A
int bCuenta; // cuenta de calificaciones B
int cCuenta; // cuenta de calificaciones C
int dCuenta; // cuenta de calificaciones D
int fCuenta; // cuenta de calificaciones F
}; // fin de la clase LibroCalificar
