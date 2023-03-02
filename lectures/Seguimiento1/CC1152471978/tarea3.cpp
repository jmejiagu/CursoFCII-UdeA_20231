#include <stdlib.h>
#include <time.h>
#include<iostream>
#include<iomanip>

using namespace std;



void tabla(){

    int lista[10]={0,0,0,0,0,0,0,0,0,0};
    int num=0;

    for(int i = 0; i<10; i++)
    {
      num = 1 + rand() % (100 +1 - 1);
      lista[i]=num;
    }

    float min=lista[0];
    float max=lista[0];
    float sum=0;

    for (int i : lista)
    {
      if (i<min) min=i;
      if (i>max) max=i;
      sum=sum+i;
    } 

    float mean=sum/10;

    cout << "Los numeros son : "; 
    for (int i : lista)
    {
      cout << i << " ";
    }

    cout << endl;

    cout << "Menor : "  << setw(5)<< min  << endl; 
    cout << "Maximo : " << setw(4)<< max  << endl;
    cout << "Suma : "   << setw(6)<< sum  << endl;
    cout << "Media : "  << setw(5)<< mean << endl;

    
}

int main(){
    
    srand(time(NULL));
    tabla();
    tabla();
    tabla();

    return 0;
}