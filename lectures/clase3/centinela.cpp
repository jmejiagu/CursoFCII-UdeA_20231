#include <iostream>

using namespace std;

int main(){
  int n1, val;
  char ch;

  while (val != 1)
    {
      cout<< "entre un letra: ";
      cin >> ch;

      cout<< "entre un numero: ";
      cin >> n1;

      
      cout<< "¿desea entra mas letras y numeros? (NO = 1, SI = 2)";
      cin >> val;

      cout << " su letra y numero son: "<< ch << " y " << n1 << endl;

    }

  return 0;

}
