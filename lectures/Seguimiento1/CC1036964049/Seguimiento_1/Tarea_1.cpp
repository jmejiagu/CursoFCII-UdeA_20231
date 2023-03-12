//Ejercicio 6 de la sección 3.6 del texto guia:
//Ejecutable holi1

#include <iostream>

using namespace std;

int main()
{
    float longitud, anchura, profundidad_media; //Variables
    cout << "Ingrese la longitud de la piscina: ";
    cin >> longitud;
    cout << "Ingrese la anchura de la piscina: ";
    cin >> anchura;
    cout << "Ingrese la profundidad media de la piscina: ";
    cin >> profundidad_media;

    float area = longitud * anchura;
    float perimetro = 2 * (longitud + anchura);

    float volumen = area * profundidad_media; //Calxular volumen
    float superficie_subterranea = 2 * (longitud + anchura) * profundidad_media + area; //Calcular suoerficie

    cout << "El perimetro de la piscina es: " << perimetro << endl;
    cout << "El volumen de la piscina es: " << volumen << endl;
    cout << "La superficie subterranea de la piscina es: " << superficie_subterranea << endl;

    return 0;
}