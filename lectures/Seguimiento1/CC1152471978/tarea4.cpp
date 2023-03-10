#include <iostream>

#include "cuadratica.h"

using namespace std;

int main()
{
  ecuacioncuad ecuacion1;
  ecuacion1.set_coefs();
  ecuacion1.get_coefs();
  ecuacion1.discriminante();
  ecuacion1.raices();

    ecuacioncuad ecuacion2;
    ecuacion2.set_coefs();
    ecuacion2.get_coefs();
    ecuacion2.discriminante();
    ecuacion2.raices();
  return 0;
}