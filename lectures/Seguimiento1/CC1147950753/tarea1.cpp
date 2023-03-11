// Edwin Dair Zapata Duque
#include<iostream>
using namespace std;

int main(){ 
    // declaro las variables
    float length;
    float width;
    float avarage_deph;
    float perimeter;
    float volume;
    float underground_surface_area;
    float suma;
    float producto;
// SOLICITO AL USUARIO QUE INGRESE POR TECLADO LAS TRES CANTIDADES
     cout<<"Introdusca los 3 parametros"<<endl;

     cout<<"length : ";
     cin>>length;

     cout<<"width : ";
     cin>>width;

     cout<<"avarage_deph : ";
     cin>>avarage_deph;

     suma = length + width;
     producto = length*width;

    perimeter = 2*(suma);
    volume = producto*avarage_deph;
    underground_surface_area = 2*(suma)*avarage_deph + avarage_deph;

    cout<<"perimeter : "<<perimeter<<endl;
    cout<<"volume : "<<volume<<endl;
    cout<<"underground_surface_area  : "<<underground_surface_area <<endl;

/*
  MEDIDAS HECHAS A MANO
   perimeter =80ft
   volume = 2062.5ft
   underground_surface_area =445.5ft
*/
    return 0;

}