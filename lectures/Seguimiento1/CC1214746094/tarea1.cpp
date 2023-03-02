#include <iostream>
using namespace std;

int main()
{
    float l, w, d, p, v, us, sum, mul;
    cout<<"Ingrese la longitud de la piscina"<<endl;
    cin>>l;
    cout<<"Ingrese el ancho de la piscina"<<endl;
    cin>>w;
    cout<<"Ingrese la profundidad de la piscina"<<endl;
    cin>>d;

    sum = l + w;
    mul = l * w;

    p = 2 * sum;
    v = mul * d;
    us = (2 * sum * d) + mul;

    cout<<"El perimetro de la piscina es:"<<p<<endl;
    cout<<"El volumen de la piscina es: "<<v<<endl;
    cout<<"El area de la piscina es: "<<us<<endl;

    return 0;

}