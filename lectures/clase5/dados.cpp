#include <iostream>
#include <iomanip>
#include <cstdlib> // contiene el prototipo de la función rand
//#include <time.h> // "ala c"
#include <ctime>  // a la c++ :)

using std::setw;
using std::cout;
using std::endl;
using std::rand;
using std::cin;

//using namespace std;

int main()
{
  int frecuencia1 = 0; // cuenta de veces que se tiró 1
  int frecuencia2{0}; // cuenta de veces que se tiró 2
  int frecuencia3{0}; // cuenta de veces que se tiró 3
  int frecuencia4{0};
  int frecuencia5{0};
  int frecuencia6{0};

  srand(time(NULL)); // TENGA CUIDADO SOLO LLAMAR UNA VEZ
  //srand(time(0));
  //srand(static_cast<unsigned int>(time(0)));  // time(0) time_t type

  /*
  unsigned seed;
  cout << "Introduzca la semilla: ";
  cin >> seed;
  srand( seed ); // siembra el generador de números aleatorios
  */
  
  int cara; 
  // sintetiza los resultados de tirar un dado 6,000,000 veces
  for ( int tiro = 1; tiro <= 6000000; tiro++ )
  //for (unsigned int tiro{1}; tiro <= 6'000'000 ; ++tiro) //   unsigned, C++14 Digit Separators for Numeric Literals  
    {
  cara = 1 + rand() % 6; // número aleatorio del 1 al 6
  // determina el valor del tiro de 1 a 6 e incrementa el contador apropiado
  switch ( cara )
    {
    case 1:
      ++frecuencia1; // incrementa el contador de 1s
      break;
    case 2:
      ++frecuencia2; // incrementa el contador de 2s
      break;
    case 3:
      ++frecuencia3; // incrementa el contador de 3s
      break;
    case 4:
      ++frecuencia4; // incrementa el contador de 4s
      break;
    case 5:
      ++frecuencia5; // incrementa el contador de 5s
      break;
    case 6:
      ++frecuencia6; // incrementa el contador de 6s
      break;
    default: // valor inválido
      cout << "El programa nunca debio llegar aqui!";
    } // fin de switch
 } // fin de for

  cout << "Cara" << setw(13) << "  Frecuencia" << endl;
  cout << "1" << setw(13) << frecuencia1
    << "\n2" << setw(13) << frecuencia2
    << "\n3" << setw(13) << frecuencia3
    << "\n4" << setw(13) << frecuencia4
    << "\n5" << setw(13) << frecuencia5
    << "\n6" << setw(13) << frecuencia6<< endl;

return 0; // indica que
}
  
