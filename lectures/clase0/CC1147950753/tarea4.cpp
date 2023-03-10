/*
Tarea4 (Jueves 8 de Marzo)
Usando las tecnicas de programcion orienta a objetos (POO) que hemos estudiado, cree una clase que soluciones ecuaciones cuadraticas:
ax^2+bx+c=0.

Su clase debe tener almenos las siguientes caracteristicas:
4 variables privadas: el valor de "a", "b", "c" y el discriminate (definido como: b * b - 4 * a * c).
Debe tener un constructor.
Ademas debe tener almenos tres funciones mas:
a) una que lea los valores de los coeficientes(a, b, c)
b) una que calcule el discriminate y nos diga de que tipo es la solucion:
   Las raíces son complejas y diferentes.
   Las raíces son reales e iguales.
   Las raíces son reales y diferentes.
c) una que calcule el valor de las raices.
*/

#include <iostream>
#include <cmath> //  librería cmath para usar la función sqrt() que calcula la raíz cuadrada

using namespace std;

// Defino la clase 
class Cuadratica {
    private:
        float a, b, c, discriminante;

    public:
        // Constructor
        Cuadratica() {
            a = 0;
            b = 0;
            c = 0;
            discriminante = 0;
        }

        // Función para leer los valores de los coeficientes
        void leerCoeficientes() {
            cout << "Ingrese los coeficientes de la ecuacion ax^2+bx+c=0: " << endl;
            cout << "a: ";
            cin >> a;
            cout << "b: ";
            cin >> b;
            cout << "c: ";
            cin >> c;
        }

        // Función para calcular el discriminante y determinar el tipo de solución
        void tipoSolucion() {
            discriminante = b * b - 4 * a * c;

            if (discriminante > 0) {
                cout << "Las raices son reales y diferentes." << endl;
            } else if (discriminante == 0) {
                cout << "Las raices son reales e iguales." << endl;
            } else {
                cout << "Las raices son complejas y diferentes." << endl;
            }
        }

        // Función para calcular el valor de las raíces
        void calcularRaices() {
            float x1, x2;

            // Si el discriminante es positivo, hay dos raíces reales y diferentes
            if (discriminante > 0) {
                x1 = (-b + sqrt(discriminante)) / (2*a);
                x2 = (-b - sqrt(discriminante)) / (2*a);
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            } else if (discriminante == 0) { // Si el discriminante es cero, hay una única raíz real
                x1 = -b/(2*a);
                cout << "x1 = x2 = " << x1 << endl;
            } else { // Si el discriminante es negativo, hay dos raíces complejas y diferentes
                float realPart = -b/(2*a);
                float imaginaryPart = sqrt(-discriminante)/(2*a);
                cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
                cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
            }
        }
};

int main() {
    Cuadratica ecuacion;

    ecuacion.leerCoeficientes();
    ecuacion.tipoSolucion();
    ecuacion.calcularRaices();

    return 0;
}
