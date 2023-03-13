//Ejercicio 7 de la sección 4.5 del texto guia:
//ejecutable holi2

#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int main() {
    string unitSytem = "Customary units";
float c;

float g;
cout<<"POR FAVOR INTRODUZCA SIEMPRE EL VALOR INDICADO EN EL MISMO SISTEMA DE UNIDADES:\n";
cout<<"Ingrese el sistema de unidades a utilizar{'Customary'(default) or metrico}:";
cin>>unitSytem; cout << "Ingrese la velocidad en km/hr or mi/hr:";
float v;
cin>>v;
int t;
cout<<"Ingrese el tiempo de reaccion en segundos:";
cin>>t;
float friction;
cout<<"Ingrese el coeficiente de friccion";
cin>>friction;
float grade;
cout<<"Ingrese la pendiente de la carretera:";
cin>>grade;
if(unitSytem == "metrico") {
c = 0.278;
g = 9.81;
} else {
c = 1.47;
32.2;
}

float ssd;
ssd = c*pow(v,2);
ssd = ssd/(2*g*(friction+grade));
ssd = ssd + v*t;
ssd = ssd*c;
cout<<"La distancia de frenado (SSD) es: "<<ssd<<" "<<unitSytem;

return 0;

}