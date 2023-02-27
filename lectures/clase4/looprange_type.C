#include <iostream>
using namespace std;

int main()
{

  //Poner una condición dentro de la declaración
  string hello = "Hello";
  for (int i = 0; char c = hello[i]; i++)
    {
      cout << c << endl;
    }
  cout << " "  << endl;
  
  string hello2 = "Hello2";
  int values[] = {1, 2, 3, 4, 5, 0};
  
  for (int i = 0; auto c = hello2[i]; i++)
    {
      cout << c << endl;
    }
  
  return 0;
}
