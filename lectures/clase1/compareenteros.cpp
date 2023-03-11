// compareenteros.cpp
// compara enteros usando operadores de comparacion >=, >,<, <= y !=
#include <iostream> 
#include <iomanip>

using std::cout; 
using std::cin; 
using std::endl; 

// function main 
int main()
{
   int number1{0}; // primer entero
   int number2{0}; // segundo entero

   
   cout << "entre dos numeros enteros: "; // 
   cin >> number1 >> number2; // lee los dos enteros del usuario

   if ( number1 == number2 )
     cout << number1 << " == " << number2 << endl;

   if ( number1 != number2 ){
     cout << number1 << " != " << number2 << endl;
   }
   
   if ( number1 < number2 ){
     cout << number1 << " < " << number2 << endl;
   }
   
   if ( number1 > number2 ){
     cout << number1 << " > " << number2 << endl;
   }
   
   if ( number1 <= number2 ){
     cout << number1 << " <= " << number2 << endl;
   }
   
   if ( number1 >= number2 ){
     cout << number1 << " >= " << number2 << endl;
   }
   

   /*
   cout<< "La suma de 6 y 5 es" << std::setw(33) << 21  << endl;
   cout<<"|"<< std::setw(10)<< std::scientific << 75.6798 <<"|" << endl;
   cout<<"|"<< std::setw(10)<< std::fixed << std::setprecision(2) << std::scientific << 75.6798 <<"|" << endl;   
   cout<<"|"<< std::setw(10)<< std::fixed << std::setprecision(3) <<  25.67 <<"|" << endl;
   */
   
   return 0; //
  

} 
