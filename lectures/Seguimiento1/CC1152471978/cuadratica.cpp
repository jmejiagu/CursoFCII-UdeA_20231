#include <iostream>
#include <cmath>

#include "cuadratica.h"

using namespace std;

ecuacioncuad::ecuacioncuad( )
{
  a = 0;
  b = 0;
  c = 0;
  root1 = 0;
  root2 = 0;
  disc = 0;
}

void ecuacioncuad::set_coefs()
{
  cout << "Introduzca los coeficientes de la ecuación cuadrática: ";
  cin >> a >> b >> c;
}
void ecuacioncuad::get_coefs()
{
  cout << "Los coeficientes de la ecuación cuadrática son: " << a << " " << b << " " << c << endl;
}

void ecuacioncuad::discriminante()
{
  disc = b*b - 4*a*c;
  cout << "El discriminante es: " << disc << endl;

  if (disc <0)
    {
      cout << "La ecuación tiene soluciones complejas" << endl;
    }
  else if (disc == 0)
    {
      cout << "La ecuación tiene una solución real " << endl;
    }
  else
    {

      cout << "La ecuación tiene dos soluciones reales"<< endl;
    }
}

void ecuacioncuad::raices(){

  if (disc < 0)
    {
      root1=sqrt(abs(disc))/(2*a);
      root2=-sqrt(abs(disc))/(2*a);
      if (root1 <0 && root2 <0){
        cout << "Las soluciones a la ecuación son: " << -b/(2*a) << root1 << "i" << " y " <<-b/(2*a) << root2 << "i" << endl;
      }
      else if (root1 >0 && root2 >0){
        cout << "Las soluciones a la ecuación son: " << -b/(2*a) <<'+'<< root1 << "i" << " y " <<-b/(2*a) << '+' << root2 << "i" << endl;
      }
      else if (root1 <0 && root2 >0){
        cout << "Las soluciones a la ecuación son: " << -b/(2*a) << root1 << "i" << " y " <<-b/(2*a) << '+' << root2 << "i" << endl;
      }
      else if (root1 >0 && root2 <0){
        cout << "Las soluciones a la ecuación son: " << -b/(2*a) <<'+'<< root1 << "i" << " y " <<-b/(2*a) << root2 << "i" << endl;
      }
    }
  else if (disc == 0)
    { root1 = -b/(2*a);
      cout << "La solción de la ecuación es : " << root1<< endl;
    }
  else
    {
      root1 = (-b + sqrt(disc))/(2*a);
      root2 = (-b - sqrt(disc))/(2*a);
      cout << "Las soluciones a la ecuación son : " << root1 << " y " << root2 << endl;
    }
}

