// sumaenteros.C
// este programa muestra la suma de dos numeros enteros

#include<iostream>

//using std::cout;
//using std::cin;
//using std::endl;

//using namespace std;

int main(){

  // declaracion de variables
  int n1{0};
  int n2{0};
  int suma{0};
  
  std::cout << "escriba el primer numero entero: "; // esto pide un dato al usuario
  std::cin >> n1;

  std::cout << "escriba el segundo numero entero: "; // esto pide un dato al usuario
  std::cin >> n2;

  suma = n1 + n2 ;
  std::cout << "la suma es :" << suma << std::endl; // note el std::endl

  // un cambio simple
  //std::cout << "la suma es :" << n1+n2 << std::endl; 

  /*
  // define char
  char ch;

  ch = 'm';
  std::cout << "el char es :" << ch << std::endl;

  ch = 'J';
  std::cout << "el char es :" << ch << std::endl;
  

  //ch = 'm';
  //cout << "el char es: " << ch << endl;
  */
  return 0;

}
