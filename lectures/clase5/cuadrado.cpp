#include<iostream>

using namespace std;

// función cuadrado para valores int
int cuadrado( int x )
{
  cout << "el cuadrado del valor int " << x << " es ";
  return x * x;
}

// función cuadrado para valores double
double cuadrado( double y )
{
  cout << "el cuadrado del valor double " << y << " es ";
  return y * y;
}


int main()
{
  cout << cuadrado( 7 ); // llama a la versión int
  cout << endl;

  cout << cuadrado( 7.5 ); // llama a la versión double
  cout << endl;
 
  return 0;
}

