#include <iostream>

using std::cout;
using std::endl;

void usarLocal(); // prototipo de función
void usarLocalStatic(); // prototipo de función
void usarGlobal(); // prototipo de función


int x = 1; // variable global

int main()
{
  cout << "la x global en main es " << x << endl;
  
  int x = 5; // variable local para main
  
  cout << "la x local en el alcance exterior de main es " << x << endl;
  { // empieza nuevo alcance
    int x = 7; // oculta la x en el alcance exterior y la x global
    cout << "la x local en el alcance interior de main es " << x << endl;
  } // termina nuevo alcance
  
  cout << "la x local en el alcance exterior de main es " << x << endl;
  
  usarLocal(); // usarLocal tiene la x local
  usarLocalStatic(); // usarLocalStatic tiene la x local estática
  usarGlobal(); // usarGlobal usa la x global

  usarLocal(); // usarLocal reinicializa su x local
  usarLocalStatic(); // la x local estática retiene su valor anterior
  usarGlobal(); // la x global también retiene su valor anterior
  
  cout << "\nla x local en main es " << x << endl;
  return 0;

}

// usarLocal reinicializa la variable x local durante cada llamada
void usarLocal()
{
  int x = 25; // se inicializa cada vez que se llama a usarLocal
  cout << "\nla x local es " << x << " al entrar a usarLocal" << endl;
  x++;
  cout << "la x local es " << x << " al salir de usarLocal" << endl;
} // fin de la función usarLocal

// usarLocalStatic inicializa la variable x local estática sólo la
// primera vez que se llama a la función; el valor de x se guarda
// entre las llamadas a esta función
void usarLocalStatic()
{
  static int x = 50; // se inicializa la primera vez que se llama a usarLocalStatic
 cout << "\nla x local estatica es " << x << " al entrar a usarLocalStatic"<< endl;
 x++;
 cout << "la x local estatica es " << x << " al salir de usarLocalStatic"<< endl;
} // fin de la función usarLocalStatic

// usarGlobal modifica la variable global x durante cada llamada
void usarGlobal()
{
  cout << "\nla x global es " << x << " al entrar a usarGlobal" << endl;
  x *= 10;
  cout << "la x global es " << x << " al salir de usarGlobal" << endl;
} // fin de la función usarGlobal
