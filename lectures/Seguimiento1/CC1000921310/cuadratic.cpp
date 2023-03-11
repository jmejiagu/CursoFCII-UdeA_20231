#include <iostream>
#include <iomanip>
#include <cmath>

#include "cuadratic.h"

CuadraticSolver :: CuadraticSolver() {     // Constructor
  setCoefficients(); //sets the coefficients inside the constructor
};

void CuadraticSolver :: setCoefficients(){ //Asked function a)
  std::cout << "Enter the value of a " << std::endl;
  std::cin >> a;
        
  std::cout << "Enter the value of b " << std::endl;
  std::cin >> b;
        
  std::cout << "Enter the value of c " << std::endl;
  std::cin >> c;
};

void CuadraticSolver :: RootType(){ //Asked function b)
  discriminate = b * b - 4 * a * c;
  if( a == 0 ){
    std::cout << "This is not a cuadratic equation" << std::endl;
  }
  else{
    if (discriminate < 0){
      std::cout << "The roots are complex and different" << std::endl;
    };
    if (discriminate == 0){
      std::cout << "The roots are real and unique" << std::endl;
    };
    if (discriminate > 0){
      std::cout << "The roots are real and different" << std::endl;
    };
  };
};    

void CuadraticSolver :: CalculateRoots(){ //Asked function c)
  if ( a == 0 ){
    if ( b == 0 ){
      if ( c == 0){
        std::cout << "This is a 0 = 0 equation." << std::endl;  // 0x^2 + 0x + 0 = 0 
      }
      else{
        std::cout << "This is equation is a contradiction" << std::endl;   // c = 0 & c != 0  =><=
      }
    }
    else{
      std::cout << "The root is " << -c / b  <<std::endl;       //bx + c = 0
    }
  }
  else{
    if (discriminate < 0){
      std::cout << "The roots are " << std :: setw(3) << std :: fixed << std :: setprecision(2) << - b / (2 * a)
      << " + " << std :: setw(3) << std :: fixed << std :: setprecision(2) << std :: sqrt(-discriminate) / (2 * a)  << "i and " 
      << std :: setw(3) << std :: fixed << std :: setprecision(2) << - b / (2 * a) << " - " 
      << std :: setw(3) << std :: fixed << std :: setprecision(2) << std :: sqrt(-discriminate) / (2 * a)  << "i" <<  std::endl;
    };

    if (discriminate == 0){
      std::cout << "The roots is " << std :: setw(3) << std :: fixed << std :: setprecision(2) << - b / (2 * a) << std::endl;
    };

    if (discriminate > 0){
      std::cout << "The roots are " << std :: setw(3) << std :: fixed << std :: setprecision(2) << (- b + std :: sqrt(discriminate)) / (2 * a) << " and " 
      << std :: setw(3) << std :: fixed << std :: setprecision(2) << (- b - std :: sqrt(discriminate)) / (2 * a) <<  std::endl;
    };
  };
};