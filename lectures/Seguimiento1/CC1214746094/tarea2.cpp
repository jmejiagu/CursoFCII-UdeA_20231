#include <iostream>
using namespace std;

int main(){

    int unid;
    float v, t, cf, g;
    cout<<"Ingrese 1 si desea el sistema internacional o 2 si desea el americano:"<<endl;
    cin>>unid;

    cout<<"Ingrese la velocidad"<<endl;
    cin>>v;

    cout<<"Ingrese el tiempo de reaccion: "<<endl;
    cin>>t;

    cout<<"Ingrese el coeficiente de friccion: "<<endl;
    cin>>cf;

    cout<<"Ingrese el grado de la carretera:"<<endl;
    cin>>g;




    if(unid==1){
        float ssd;
        ssd= 0.278*(v*t + (0.278*v*v)/(2*9.81*(cf+g)));
        cout<<"La distancia de vision de parada en unidades del sistema internacional es:"<<ssd<<endl;
    }
    else{
        float ssd_a;
        ssd_a=1.47*(v*t + (1.47*v*v)/(2*32.2*(cf+g)));
        cout<<"La distancia de vision de parada en unidades americanas es: "<<ssd_a<<endl;

    
    }

        
return 0;

}