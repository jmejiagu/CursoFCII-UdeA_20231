#include <iostream>
#include<cmath>
#include <iomanip>
#include <cstdlib> // contiene el prototipo de la función rand
//#include <time.h> // "ala c"
#include <ctime>  // a la c++ :)

using namespace std;

int main()
{
int numero_ale=0;int suma=0; int val_max=0; int val_min=0; int prom=0;
int N=0; int M=0;
srand(time(NULL)); // TENGA CUIDADO SOLO LLAMAR UNA VEZ

std::cout<<"Ingrese el numero de elementos que quiere tener en su lista aleatoria\n \n"; std::cin >> N;

std::cout<<"Ahora ingrese el valor maximo de su lista\n \n"; std::cin >> M;

suma=0;
val_min = 1 + rand() % M;


for (int j = 0; j < 3; j++)
{
std::cout<<"Grupo # : \t :"<<j<<"\n \n"; 
for (int i = 0; i < N; i++)
{


numero_ale = 1 + rand() % M;

std::cout<<"Numero aleatorio : \t :"<<numero_ale;
std::cout<<"\n :";


suma=numero_ale+suma;

 if(numero_ale>val_max)
 {
    val_max=numero_ale;

 }
 if(numero_ale<val_min)
 {
    val_min=numero_ale;

 }
}
 

}

std::cout<<"Los resultados estadisticos de nuestra investigación muestra los siguientes resultados \n \n";

std::cout<<"El valor maximo es :"<< val_max;

std::cout<<"\n \nEl valor minimo es :"<< val_min;

std::cout<<"\n \nLa suma total es : "<< suma;

std::cout<<"\n \nEl valor promedio es: "<< suma/N;

}