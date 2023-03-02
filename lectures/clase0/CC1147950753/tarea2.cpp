// Tarea 2
#include<iostream>
using namespace std;

int main(){
    float c;
    float v;
    float t = 1.5;
    float g;
    int   f = 47;
    float G;
    float SSD;
    int choose;
    
    cout<<"A continuacion elija entre Sistema Metrico o Sistema Americano"<<endl;
    cout<<" Sistema Metrico : 1 / Sistema Americano : 2 "<<endl;
    cin>>choose;
    
    cout<<"Ingrese (v,G)"<<endl;
    //cout<<"t : "; cin>>t;
    cout<<"v : "; cin>>v;
    cout<<"G : "; cin>>G;

    switch (choose)
    {
    case 1: // sistema metrico
        c = 0.278;
        g = 9.81;
        SSD = c*(v*t + (c*v*v)/(2*g*(f+G))); 
        cout<<"SSD : "<<SSD;
        break;

    case 2:  // sistema americno
        c = 1.47;
        g = 32.2;
        SSD = c*(v*t + (c*v*v)/(2*g*(f+G)));
        cout<<"SSD : "<<SSD;
        break;
    
    default:
        break;
    }
}

/* Tabla

Speed    |   reacting_Time(s)  |    Coeffident_of_friction   |  Road_Grade    |    SSD
30mph    |        1.5          |            0.47             |     -0.3       |  66.7967
30mph    |        1.5          |            0.47             |      0.3       |  66.7885
60mph    |        1.5          |            0.47             |     -0.3       |  134.887
60mph    |        1.5          |            0.47             |      0.3       |  134.854
80mph    |        1.5          |            0.47             |     -0.3       |  180.998
80mph    |        1.5          |            0.47             |      0.3       |  180.94
40km/hr  |        1.5          |            0.47             |     -0.3       |  16.815
40km/hr  |        1.5          |            0.47             |      0.3       |  16.8132
65km/hr  |        1.5          |            0.47             |     -0.3       |  27.4614
65km/hr  |        1.5          |            0.47             |      0.3       |  27.4568
90km/hr  |        1.5          |            0.47             |     -0.3       |  38.2132
90km/hr  |        1.5          |            0.47             |      0.3       |  38.2046


*/