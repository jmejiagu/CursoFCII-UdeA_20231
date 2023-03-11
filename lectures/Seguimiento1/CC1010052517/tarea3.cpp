#include <iostream>
#include <time.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

void statistic(short int cant_ran){
  //Genera un conjunto de números aleatorios
  //Imprime quiénes son, cuál es el más pequeño, la suma total y el promedio

  //
  
  float random_number = 5000;
  float sum = 0;
  float min_ran = 0;
  float max_ran = 0;
  float prom = 0;

  cout << "El grupo de números aleatorios es (";
  for(int i = 0; i < cant_ran; i++){
    // Genera números aleatorios entre -10 y 10
    random_number = rand() % 20 - 10;
    cout << random_number << " ";
    if (random_number < min_ran){
      min_ran = random_number;
	}
    if (random_number > max_ran){
      max_ran = random_number;
    }
    sum += random_number;
  }
  prom = sum / cant_ran;
  cout << ")";
  cout << endl;
  cout << "El valor mímimo es " << setw(5) << min_ran << endl;
  cout << "El valor máximo es " << setw(5) << max_ran << endl;
  cout << "La suma total es " << setw(7) << sum << endl;
  cout << "El promedio es " << setw(9) << prom << endl;
}

int main(){
  srand(time(NULL));
  for(int i = 0; i<3; i++){
    statistic(10);
    cout << endl;
  }
  return 0;
}
