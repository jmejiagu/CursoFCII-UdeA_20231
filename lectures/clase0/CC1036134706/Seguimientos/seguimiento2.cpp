#include<iostream>
#include<cmath>
using namespace std;

//Definción de variables
int main ()
{
double SSD;
double c=0; int g=9.81;
double t=0; double v=0; double f=0; double road_grade=0; 
double ssd_return=0;
int Unidades; 
string inicio;
bool condicion= 0;

std::cout <<"\n\n Bienvenido al curso FCII, me llamo sergio y te voy a acompañar en este calculo \n\n";

std::cout << "Vamos a resolver el problema 7 del capitulo 4.5 del libro guía, (C++ for engineeers and scientist), la descricion del problema se muestra acontinuacion \n\n";

std::cout << "La distancia de visibilidad de frenado (SSD) se define como la distancia necesaria para que un conductor vea un objeto en la carretera y luego se detenga antes de chocar con el. Se compone de la distancia para reaccionar al ver el objeto por primera vez y luego la distancia para detenerse despues de accionar el freno";

while (condicion == 0)
{


std::cout <<"En que unidades deseas trabajar, Sistema internacional (1) o anglosajon (2)\n \n";
std::cout <<"Escoja un numero \n \n";

std::cin >>  Unidades;
switch(Unidades) //donde opción es la variable a comparar
{
    case 1: //Bloque de instrucciones 1;
        c=.278;
        condicion = 1;
            break;

    case 2: //Bloque de instrucciones 2;
        c =1.47;
        condicion = 1;
            break;
    default: std::cout<<"Error\n \n \n";
    std::cout <<"Recuerde elegir una opcion :\n \n"
    "- (1) Sistema internacional  \n"
    "- (2)  Sistema anglosajon (2)\n";
}

}


    



std::cout << "Vamos a calcular las medidas fisicas de una piscina \n \n" ;
std::cout << " Ingrese los valores requeridos (largo, profundidad y ancho): \n \n";
std::cout << "Ingrese la velocidad: \t";std::cin >> v;
std::cout << "Ingrese el coeficiente de friccion: \t"; std::cin >> t;
std::cout << "Ingrese El tiempo de reaccion: \t "; 
std::cin >> road_grade;

ssd_return=c*(v*t+(c*v*v)/(2*g*(f+road_grade)));

std::cout << "El resultado de la operacion es: \t";
std::cout << ssd_return;
return 0;
}