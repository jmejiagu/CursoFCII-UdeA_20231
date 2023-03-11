#include <iostream>
//1#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
//Definción de variables
float length, average_depth, width;
double A;double B;



//Interacción con usuario

cout << "Vamos a calcular las medidas físicas de una piscina \n" ;
cout << " Ingrese los valores requeridos (largo, profundidad y ancho): \n";
cout << "Ingrese el largor: \t"; cin >> length;
cout << "Ingrese el ancho: \t"; cin >> width;
cout << "Ingrese la profundidad: \t"; cin >> average_depth;

cout << "Espere un momento por favor \n \n ";
A=length+width; B=length*width;
float perimeter=2*A,volume = B*average_depth;
float underground_surface_area=2*A*average_depth+B;
//Impresión resultados

cout << "El valor del Volumen es : \t"<< volume<< "\n";
cout << "El valor del width es : \t"<< width << "\n";
cout << "El valor del length es : \t"<< length << "\n";
cout << "El valor del A es : \t"<< A << "\n";
cout << "El valor del B es : \t"<< B << "\n";

cout << "El valor del Perimeto es :\t"<< perimeter<< "\n";
cout << "¿El valor de la superficie subterranea? :\t"<< underground_surface_area<< "\n";
cout <<"Gracias por su tiempo";
return 0;
}