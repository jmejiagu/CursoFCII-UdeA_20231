#include <iostream>

#define PI 3.1416; //Definimos una constante llamada PI
#define newline "\n";

int main()
{
  //std::cout << "Mostrando el valor de PI: " << PI << std::endl;

  std::cout << "Mostrando el valor de PI: " << PI ;
  std::cout << newline ;// cout << "\n ";

  const float PI2  = 3.1416;
  double r=5.0;
  double circle;
  // radius
  circle = 2 * PI2 * r;
  std::cout << circle;
  std::cout << newline;
  
  return 0;
}
