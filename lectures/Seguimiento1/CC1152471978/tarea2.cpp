#include "iostream"
//#include <vector>
#include <iomanip>
using namespace std;

// funcion que le pregunta al ususario que sistema metrico usar
float metric(){
    int metric;
    float C;
    float v;
    cout<< "Este programa calcula la distancia de frenado de un vehiculo \n";
    cout << "¿Que sistema metrico desea usar? \nElija 0 para sistema métrico y 1 para sistema inglés :\n ";
    cin >> metric;
    cout << endl;
    if (metric == 0){
        cout << "Usted ha elegido el sistema métrico \n";
    }
    else{
        cout << "Usted ha elegido el sistema inglés \n";

    }
    return metric;
}

//función que reccibe road grade
float road_grade(){
    float grade;
    cout << "Ingrese la pendiente de la carretera.\nSi es colina arriba ingrese 0, si es colina abajo ingrese 1 :";
    cin >> grade;
    cout << endl;
    return grade;
}

//funcion que recibe coeficiente de rozamiento
float friction(){
    float f;
    int b;
    cout << "¿Desea usar el coeficiente de rozamiento por defecto? \nSi es así ingrese 0, si no ingrese 1 :\n";
    cin >> b;
    cout << endl;
    if (b==0){
        f=0.47;
    }
    else{
        cout << "Ingrese el coeficiente de rozamiento: ";
        cin >> f;
        cout << endl;
    }

    return f;
}
// function that calculates the stopping sight distance
float SSD(){
    float ssd;
    int b=metric();
    int bb=road_grade();

    float v;
    float c;
    float g;
    float G;
    float f=friction();
    float t=1.5;
    

    if (b==0){
        c=0.278;
        g=9.8;
        cout << "Ingrese la velocidad del vehiculo en km/h: ";
        cin >> v;
    }
    else{
        c=1.47;
        g=32.2;
        cout << "Ingrese la velocidad del vehiculo en mi/h: ";
        cin >> v;
    }
    
    if (bb==0){
        G=0.3;
    }
    else{
        G=-0.3;
    }


    ssd=c*(v*t+c*v*v/((G+f)*(2*g)));

    if (b==0){
        cout << "La distancia de frenado es: " << setprecision(3) << ssd << " m" << " para una velocidad de " << v << " km/h" <<"un coeficiente de rozamiendo de "<<f<< " y una inclinación de " << G <<"\n";
    }
    else{
        cout << "La distancia de frenado es: " <<setprecision(3)<< ssd << " ft" << " para una velocidad de " << v << " mi/h " <<"un coeficiente de rozamiendo de "<<f<< " y una inclinación de " << G << "\n";
    }
    return ssd;
}

int main(){
    SSD();
    return 0;
}


