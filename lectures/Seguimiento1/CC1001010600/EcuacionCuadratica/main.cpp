#include "quadratic.h"

int main(){
  //Crea el objeto y solicita los valores de a,b y c
  Quadratic Q;
  //Obtiene el discriminante y muestra las posibles soluciones
  Q.getDiscriminant();
  //Muestra las soluciones de la ecuacion cuadratica
  Q.getRoots();

  return 0;
}