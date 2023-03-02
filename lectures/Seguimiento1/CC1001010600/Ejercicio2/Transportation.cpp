#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float SSD(float unitSys, float v, float t, float f, float G){

  float result;
  float c{0}, g{0};
  //Selecciona las unidades de las constantes
  if(unitSys == 1){
    c = 0.278; g = 9.81;
  }
  else{
    c = 1.46; g = 32.2;
  }

  //Calcula SSD
  result = c * (v*t + c * pow(v, 2) * pow(2*g*(f+g), -1) );
  
  return result;
}

int main()
{
  int unitSys{0};
  float speed{0}, reactTime{0}, cFric{0}, roadGrade{0};
  
  cout << "Stopping sight distance" << endl;
  cout << endl <<  "Select unit system: \n 1. Metric \n 2. U.S units" << endl;
  cin >> unitSys; // Registra el sistema de unidades
  cout << endl<<  "The program needs: speed, reaction time, coefficient of friction and the road grade." << endl;

  //Registra los respectivos valores
  cout << endl << "Enter Speed: ";
  cin >> speed;
  cout << endl << "Enter reaction time: ";
  cin >> reactTime;
  cout << endl << "Enter coefficient of friction: ";
  cin >> cFric;
  cout << endl << "Enter the road grade: ";
  cin >> roadGrade;

  //Muestra el resultado
  cout << endl << "The stopping sight distance is: " << SSD(unitSys, speed, reactTime, cFric, roadGrade) << endl;
 
    return 0;
}
