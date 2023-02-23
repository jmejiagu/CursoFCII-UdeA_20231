/*
A una clase de diez estudiantes se les aplicó un examen. 
Las calificaciones (enteros en el rango de 0 a 100) de este examen están disponibles para su análisis. 
Calcule y muestre el total de las calificaciones de todos los estudiantes y el promedio de la clase para este examen.
*/
#include <iostream>
#include "cursename.h"

using namespace std;

int main()
{
LibroCalificar miLibroCalificar( "FCII Programacion en C++" );
miLibroCalificar.mostrarMensaje(); 
miLibroCalificar.determinarPromedioClase(); 
return 0; 
}
