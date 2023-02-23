#include "cursename.h"

LibroCalificar::LibroCalificar( string nombre )
{
  establecerNombreCurso( nombre ); 
} 

void LibroCalificar::establecerNombreCurso( string nombre )
{
  if ( nombre.length() <= 25 ) 
    nombreCurso = nombre; 
  else 
    { 
      nombreCurso = nombre.substr( 0, 25 ); 
      cout << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
	   << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
    }
} 

string LibroCalificar::obtenerNombreCurso()
{
  return nombreCurso;
} 

void LibroCalificar::mostrarMensaje()
{
  cout << "Bienvenido al libro de calificaciones para \n" << obtenerNombreCurso() << "!\n"
       << endl;
} 

// determina el promedio de la clase, con base en las calificaciones escritas por el usuario
void LibroCalificar::determinarPromedioClase()
{
  int total; 
  int contadorCalif; 
  int calificacion; 
  double promedio;
  
  total = 0; 
  contadorCalif = 0;
  
  cout << "Escriba la calificacion o -1 para salir: ";
  cin >> calificacion; 
  // itera hasta leer el valor centinela del usuario
  while ( calificacion != -1 ) // mientras calificación no sea -1
    {
      total = total + calificacion; 
      contadorCalif = contadorCalif + 1; 
      cout << "Escriba la calificacion o -1 para salir: ";
      cin >> calificacion; 
    }

  if ( contadorCalif != 0 ) // si el usuario introdujo al menos una calificación...
    {
      // calcula el promedio de todas las calificaciones introducidas
      promedio = static_cast< double >( total ) / contadorCalif;// NOTABENE: dividir dos enteros da una division entera
      //promedio = (double)total / contadorCalif;     
      //promedio =  total  / contadorCalif;

      // muestra el total y el promedio (con dos dígitos de precisión)
      cout << "\nEl total de las " << contadorCalif << " calificaciones introducidas es "
	   << total << endl;
      cout << "El promedio de la clase es " << setprecision( 2 ) << fixed << promedio << endl;
    } 
  else{
    cout << "No se introdujeron calificaciones" << endl;
  }
} 
