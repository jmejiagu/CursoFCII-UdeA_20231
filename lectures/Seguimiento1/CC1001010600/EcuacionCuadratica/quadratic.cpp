#include "quadratic.h"

Quadratic::Quadratic(){
    getValues();
}

void Quadratic::getValues(){
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "Enter c: ";
  cin >> c;
  disc = b*b - 4*a*c;
}

void Quadratic::getDiscriminant(){
  cout << "The solutions for " << a << "x**2 + " << b << "x + " << c << " are:"<< endl; 
  if(disc<0){
  cout << "Complex and different roots" << endl;
  }
  else if(disc == 0){
  cout << "Real and equal roots" << endl;
  }
  else{
  cout << "Real and different roots" << endl;
  }
}

void Quadratic::getRoots(){
  if(disc<0){
    cout << "r1 = " << -b/(2*a) << "-" << sqrt(-disc) / (2*a) <<"i"<< endl;
    cout << "r2 = " << -b/(2*a) << "+" << sqrt(-disc) / (2*a) <<"i"<< endl;
  }
  else if(disc == 0){
    cout << "r1 = r2 = " << -b/(2*a) << endl;
  }
  else{
    cout << "r1 = " << -b/(2*a) << "-" << sqrt(disc) / (2*a) << endl;
    cout << "r2 = " << -b/(2*a) << "+" << sqrt(disc) / (2*a) << endl;
  }
}
