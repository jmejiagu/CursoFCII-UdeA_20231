#include<iostream>
#include<cmath>
using namespace std;

class FooClass
{
    private:
	int a, b, c, discri;
	public:
	FooClass(int, int, int); //Constructor parametrizado
	void printVars();
    void discriminant();
    void solution();
};

FooClass::FooClass(int x, int y, int z)
{
	a = x;
	b = y;
	c = z;
    discri=  b * b - 4 * a * c;
}

void FooClass::discriminant()
{
cout<<"\n";
cout<<"El valor del discriminate es \t:"<<discri;
cout<<"\n";

 if (discri < 0){
cout<<"Raices complejos"<<endl;
        cout<<"\n";
 }
    else if (discri=0)
    {
cout<<"Raices iguales y reales"<<endl;
    }

    else if (discri>0)
    {
cout<<"Raices iguales y diferentes"<<endl;
    }
    
 
}


void FooClass::printVars()
{
    cout<<"Los parametros escogidos son: \n";
	cout<<"a :\t "<<a<<", b :\t "<<b<<", c :\t "<<c<<endl;
    cout<<"\n";
}

void FooClass::solution()
{

    float x = discri; 
    
    if (x < 0){
        x = x*(-1);
        cout<<"Solucion solo en números complejos"<<endl;
        cout<<"\n";
        cout<<"Solucion en numeros complejos: " <<(-b/(2*a))<<" + "<<(sqrt(x)/(2*a))<<"i y "<<(-b/(2*a))<<" - "<<(sqrt(x)/(2*a))<<"i"<<endl;
        cout<<"\n";
    }
    else if(x<0.000001)
    {
        float x1 = (-b + sqrt(x)) / (2*a);
         cout<<"La solucion tiene multplicidad 2 y es :x1 = \t "<<x1<<endl;
         cout<<"\n";
    }
    
    else if(x>0)
    {
        // Aplicamos la formula
        float x1 = (-b + sqrt(x)) / (2*a);
        float x2 = (-b - sqrt(x)) / (2*a);
        cout<<"La soluciones son : x1 = "<<x1 <<" y x2 = "<<x2<<endl;
        cout<<"\n";
    }
}

int main()
{
    int a=0;
    int b=0;
    int c=0;
    cout<<"Buenos dias caballero, estamos aca para calcular la solucion de una ecuacion cuadratica,seleccione a continuacion los tres parametros de su ecuacion cuadratica \n"; 
    
    cout<<"Ingrese primero a: \t";
    cout<<"\n";
    cin>>a;
    
    cout<<"Ahora ingrese b: \t";
    cout<<"\n";
    cin>>b;
    
    cout<<"Por ultimo ingrese c: \t";
    cout<<"\n";
    cin>>c;
    	
    FooClass bolita(a,b,c); //Inicialización con parámetros de entrada
	bolita.printVars();
    bolita.discriminant();
    bolita.solution();


	return 0;
}