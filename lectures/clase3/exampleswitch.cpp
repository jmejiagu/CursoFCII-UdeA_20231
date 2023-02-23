//Que pida un número del 1 al 7 y diga el día de la semana correspondiente.
#include <iostream>

using namespace std;

int main(){

  int i;
  cout<<"Introduzca el número del 1 al 7 correspondiente al día de la semana:" << endl;
  cin >> i;

  switch(i)
    {
    case 1:
      cout <<"Lunes" << endl;
      cout << " Este dia no quiero madrugar" << endl;
      break;
    case 2:
      cout <<"Martes\n" << endl;
      break;
    case 3:
      cout <<"Miércoles\n" << endl;
      break;
    case 4:
      cout <<"Jueves\n" << endl;
      break;
    case 5:
      cout <<"Viernes\n" << endl;
      break;
    case 6:
      cout <<"Sábado\n" << endl;
      break;
    case 7:
      cout <<"Domingo\n" << endl;
      break;
    default:
      cout <<"Este dia no existe" << endl;
      cout <<"¿Acaso usted no desea trabajar?" << endl;
      break; // opcional; saldrá del switch de todas formas
    }
  
  return 0;
  
}
