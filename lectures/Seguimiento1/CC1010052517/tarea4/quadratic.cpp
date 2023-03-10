#include <iostream>
#include <cmath>

using namespace std;

#include "quadratic.h"

Quadratic::Quadratic(){
  get_coeff();
}

void Quadratic::get_coeff(){
  cout << "Introduzca el valor de a: ";
  cin >> a;
  cout << "Introduzca el valor de b: ";
  cin >> b;
  cout << "Introduzca el valor de c: ";
  cin >> c;
}

float Quadratic::discriminante(){
  d = b * b - 4 * a * c;
  cout << "El valor del discriminante es: " << d << endl;
  if (d > 0){
    cout << "Las raíces son reales y diferentes.\n";
  }
  else{
    if (d < 0){
      cout << "Las raíces son complejas y diferentes.\n";
    }
    else cout << "Las raíces son reales e iguales.\n";
  }
  return d;
}

void Quadratic::root(){
  if (a == 0){
    cout << "Los valores ingresados no corresponden con la forma de una ecuación cuadrática.\n";
    cout << "La raíz de la ecuación es:\n";
    cout << -c/b << endl;
  }
  else{
  if (d == 0){
    sol1 = (-b + pow(d, 0.5)) / (2 * a);
    cout << "La raìz de la ecuación es:\n" << sol1 << endl;
  }
  else{
    cout << "Las raìces de la ecuación son:\n";
    if (d > 0){
      sol1 = (-b + pow(d, 0.5)) / (2 * a);
      sol2 = (-b - pow(d, 0.5)) / (2 * a);

      cout << sol1 << endl;
      cout << sol2 << endl;
    }
    else{
      sol1 = (pow(-d, 0.5)) / (2 * a);
      sol2 = - (pow(-d, 0.5)) / (2*a);
  if (a > 0){
    cout << -b / (2 * a) << '+' << sol1 << "i\n";
    cout << -b / (2 * a) << sol2 << "i\n";
  }
  else{
    cout << -b / (2 * a) << sol1 << "i\n";
    cout << -b / (2 * a) << '+' << sol2 << "i\n";
  }
}
}
};
}
