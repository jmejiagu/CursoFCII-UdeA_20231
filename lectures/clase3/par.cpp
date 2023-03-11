#include <iostream>

using namespace std;

int main(){

  int n1, porc;
  
  cout<< "Programa para determinar naturaleza par o impar de un numero"<< endl;
  cout<<"Introduzca un numero entero: "<<endl;
  
  cin>> n1;
  
  porc= n1%2;

  
  if(porc==0)
    cout<< "El numero es par\n";
  else
    cout<< "El numero es impar\n";

  
  // Este nos muestra expresiones compuestas
  /*
  int b = 8;

  cout<< "b es" << b << endl;
  
  if(porc==0){
    cout<< "El numero es par" << endl;
    cout << "si le sumamos 1 se volvera impar"  << endl;
    int b = 16;
    double c = 50.5;
    cout<< "b ahora es " << b << "y c es " << c << endl;
  }
  else{
    cout<< "El numero es impar\n";
    cout << "si le sumamos 1 se volvera par"  << endl;
    // si trata de impirmer c aca le dara error
    
    cout<< "en este bloque b es " << b << endl;

  }
  */
  
  // este nos muestra if anidados
  /*
  cout<<"Introduzca un segundo numero entero: "<<endl;
  int n2;
  cin >> n2;
  
  int porc2 = (n1+n2)%2;   
  
  if(porc==0){
    cout<< "El primer numero es par\n";
    if (porc2 == 0){
      cout<< "El segundo numero es par\n";
    }
    else{
      cout<< "El segundo numero es impar\n";
    }
  }
  else
    cout<< "El numero es impar\n";   // ES NECESARIO USAR "{}"
  */
  
  return 0;

}
