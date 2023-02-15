#include <iostream>

using namespace std;

int main()
{
  int first(0);
  int second(0);
  
  cout << "This programme determinates if two given numbers are or not equal each other" << endl;
  
  cout << " Insert the first integer number ";
  cin >> first;
  
  cout << " Insert the second integer number ";
  cin >> second;
  
  string result;
  
  result = (first == second) ? "equal" : "not equal";
  // Esta linea es probablemente una de las lineas de codigo C++ de aspecto mas extraño que veras en este curso. 
  
  cout << result << endl;  // NOTE: no usamos std::cout o st::endl. 
  
  return 0;
}
