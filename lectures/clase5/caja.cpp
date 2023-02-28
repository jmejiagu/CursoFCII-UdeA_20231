#include<iostream>

using namespace std;

//int VolumenCaja(int , int , int );
int VolumenCaja(int = 1, int = 1, int =1 ); //funcion prototipo

int main()
{

  cout << "el volumen predeterminado es " << VolumenCaja()<< endl;
  cout << endl;

  cout << "el volumen que le damos es " << VolumenCaja(2,2,2)<< endl;

  cout << "el volumen que le damos es " << VolumenCaja(2)<< endl;

 
  return 0;
}
 
int VolumenCaja(int L, int A , int P ){

  cout <<" L, A, P = " << L<< ", " <<A<< ", " << P << endl;
  return L*A*P;

}
