//Solución a ecuaciones cuadráticas
////ejecutable holi4

#include <iostream>
#include <math.h>

using namespace std;

class quadEq {
public:
    inline quadEq(){};
    void setCoef(float a, float b, float c);
    void checkDisc();
    void roots();

private:

float a, b, c, disc;

};

int main(int argc, char const *argv[])
{
    /* code */

    quadEq *Ec1 = new quadEq();

    // Se puede cambiar el valor de los coeficientes a, b, c.

    Ec1->setCoef(1, 5, 6);
    Ec1->checkDisc();
    Ec1->roots();

    return 0;
}

void quadEq::setCoef(float a, float b, float c){
    this->a = a;
    this->b = b;
    this->c = c;
}

void quadEq::checkDisc(){
    disc = b * b - 4 * a * c;

    if (disc<0){
        cout << "Las raices son complejas y diferentes." << endl;
    }
    else if(disc>0){
        cout << "Las raices son reales y diferentes." << endl;
    }
    else {
        cout << "Las raices son reales e iguales." << endl;
    }
}

void quadEq::roots(){
    // checkDisc();

    if (disc<0){
        cout<< "Raiz 1: " << (-b/(2*a)) << " + " << (sqrt(-disc)/(2*a)) << "i" << endl;
        cout<< "Raiz 2: " << (-b/(2*a)) << " - " << (sqrt(-disc)/(2*a)) << "i" << endl;
    }
    else if(disc>0){
        cout<< "Raiz 1: " << (-b/(2*a)) + (sqrt(disc)/(2*a)) << endl;
        cout<< "Raiz 2: " << (-b/(2*a)) - (sqrt(disc)/(2*a)) << endl;
    }
    else {
        cout << "Raiz:" << (-b/(2*a)) << endl;
    }

}