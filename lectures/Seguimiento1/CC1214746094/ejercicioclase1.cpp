#include <stdlib.h> 
#include <time.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    

    srand(time(NULL));

    for(int j=1; j<=3; j++){
        int num{0};
        int suma{0};
        int promedio{0};
        int menor{10};
        int mayor{0};
        
        for( int i=1; i<=10; i++){

            
            int num= 1 + rand() % (11-1);
            cout<< num << " ";
            
            if(num < menor){
                menor=num;
            }

            if(num > mayor){
                mayor=num;
            }
            
            suma= suma+num;
            promedio= suma/10 ;
        }
    cout<<"La suma de los datos es:"<<suma<<endl;
    cout<<"El promedio es:"<<promedio<<endl;
    cout<<"El menor es:"<<menor<<endl;
    cout<<"El mayor es:"<<mayor<<endl;
    }
     


return 0;
}
