#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;
 
int main()
{

 
  int num;
  double num2;
  int x = 0;
  int y = 0;

  srand(time(NULL));// Necesario inicializa los numeros aleatorios. De lo contrario siempre dan lo mismo
  
  for(int c = 1; c <= 10; c++)
    {
      num = 1 + rand() % (100 +1 - 1);
      cout << num<< " ";

      if (num <= 25){
	x++;
	cout << "aca ando xx++" << endl;

      }
      else if( num > 25 && num <= 50){
	x--;
	cout << "aca ando x--" << endl;
      }
      else if ( num > 50 && num <= 75){
	y++;
	cout << "aca ando y++" << endl;
      }
      else{
	y--;
	cout << "aca ando y--" << endl;
      }
	      
    }

  cout << " " << endl;
  cout << "Las cordenadas finales del borracho son: (x,y)=  (" << x << ", " << y << ")" << endl;    
  
  return 0;
}
