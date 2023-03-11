#include <iostream>
#include <cmath>

using namespace std;
//#define PI 3.1416
int main()
{
  const float PI  = 3.1416;
  float ag, ar, s,c,t;
  cout<< "Ingrese el angulo en grados"<< endl;
  cin>>ag;
  ar = ag * PI /180;
  s = sin(ar);
  c = cos(ar);
  t = tan(ar);
  cout<<"El seno es "<<s<<endl;
  cout<<"El coseno es "<<c<<endl;
  cout<<"La tangente es "<<t<<endl;

  cout<<" "<<endl;
  cout<<"funciones log and exp "<<endl;
  cout<<" "<<endl;

  cout<<"exp(1.0) "<<exp(1.0)<<endl;
  cout<<"log(10.0) "<<log(10.0)<<endl;
  cout<<"log(exp(1.0)) "<<log(exp(1.0))<<endl;
  cout<<"exp(2.30259) "<<exp(2.30259)<<endl;

  return 0; 
}
