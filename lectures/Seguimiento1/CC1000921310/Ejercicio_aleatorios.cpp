//Juan Andrés González Moncada CC1000921310

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  int size = 10; //tamaño de cada grupo de numeros aleatorios
  int aleatorio = 0;
  int min = 0;
  int max = 0;
  int rango = 100; //Los números aleatorios se generan entre 0 y este valor
  
  float suma = 0; //Suma de los números aleatorios, es un float para sacar el promedio después
  

  srand (time(NULL));
  
  for (int i = 1; i <= 3; i++){
    cout << endl << "Grupo número " << i << ":" << endl;
    min = rango + 1;
    max = 0;
    suma = 0;

    for (int j = 0; j < size; j ++){
      aleatorio = int(double(rand())/RAND_MAX * rango);
	cout << aleatorio << " ";
	
      if (aleatorio < min){
	min = aleatorio; //Resiva si el nuevo número es el nuevo mínimo del grupo
	    };
      
      if (aleatorio > max){
	max = aleatorio; //Revisa si el nuevo número es el nuevo máximo del grupo
	    };
      
      suma += aleatorio;

    };
    cout << endl << "min = " << min << endl;
    cout << "max = " << max << endl;
    cout << "suma = " << suma << endl;
    cout << "promedio = " << float(suma/size) << endl;
  };
  
  return 0;
 

}
