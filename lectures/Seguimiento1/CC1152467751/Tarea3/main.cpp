#include <iostream>
#include "Tarea3.h"
using namespace std;

int main()
{
    Grupos grupo1(5);
    Grupos grupo2(10);
    Grupos grupo3(7);

    cout << "Información del grupo 1" << endl;
    grupo1.getInfo();
    cout << "Información del grupo 2" << endl;
    grupo2.getInfo();
    cout << "Información del grupo 3" << endl;
    grupo3.getInfo();

    return 0;
}