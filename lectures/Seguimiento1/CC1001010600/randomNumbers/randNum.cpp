#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;
//Calcula la suma
int suma(int lGroup, int lista[]){
  float suma{0};
  for(int i = 0; i<lGroup; i++){
    suma += lista[i];
  }
  return suma;
}
//Calcula promedio
float prom(float sum, float lGroup){
  float prom = sum/lGroup;
  return prom;
}

int main(){
  int lGroup{0}, cGroup{0}; 
  cout << "Calculo de estadisticas para un grupo de numeros (1-100)" << endl;
  
  cout << "Ingrese cantidad de grupos: ";  cin >> cGroup;
  cout << "Ingrese cantidad de elementos de los grupos: "; cin >> lGroup;
  cout << endl;
  
  srand(time(NULL));
  
  cout << endl << "************************" << endl;
  
  for(int i = 0; i<cGroup; i++){

    int lista[lGroup] = {};
    cout << "lista " << i+1 << ": ";
    //Creacion de lista
    for(int j=0; j<lGroup; j++){
      lista[j] = 1+rand()%100;
      cout << lista[j] << " ";
    }
    
    cout << endl << "========================" << endl;
    //Imprime los valores solicitados
    
    cout << setw(11) << "suma = ";
    cout << suma(lGroup, lista) << endl;
    
    cout << setw(11) << "Promedio = ";
    cout << prom(suma(lGroup, lista), lGroup) << endl;

    //Ordena la lista para calcular min y max
    sort(lista, lista + lGroup);
    cout << setw(11) << "Min = " << lista[0];
    cout << endl;
    cout << setw(11) << "Max  = " << lista[lGroup-1];
    
    cout << endl << "************************" << endl;
  }
  
  
  return 0;
}
