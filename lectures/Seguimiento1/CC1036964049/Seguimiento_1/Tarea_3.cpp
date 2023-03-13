//¿Estadísticas para pequeños grupos?
////ejecutable holi3

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

vector<int> arrGen(const int size);

int maxNumero(vector<int> arr);

int minNumero(vector<int> arr);

int sumaArr(vector<int> arr);

float prom(vector<int> arr);

int main()
{
    // Grupo 1
    cout << "Arreglo 1" << endl;
    vector<int> arr1 = arrGen(10);

    cout << "Maximo: " << maxNumero(arr1) << endl;
    cout << "Minimo: " << minNumero(arr1) << endl;
    cout << "Suma: " << sumaArr(arr1) << endl;
    cout << "Promedio: " << prom(arr1) << endl;

    cout << endl;

    // Grupo 2
    cout << "Arreglo 2" << endl;
    vector<int> arr2 = arrGen(6);

    cout << "Maximo: " << maxNumero(arr2) << endl;
    cout << "Minimo: " << minNumero(arr2) << endl;
    cout << "Suma: " << sumaArr(arr2) << endl;
    cout << "Promedio: " << prom(arr2) << endl;

    cout << endl;

    // Grupo 3
    cout << "Arreglo 3" << endl;
    vector<int> arr3 = arrGen(20);

    cout << "Maximo: " << maxNumero(arr3) << endl;
    cout << "Minimo: " << minNumero(arr3) << endl;
    cout << "Suma: " << sumaArr(arr3) << endl;
    cout << "Promedio: " << prom(arr3) << endl;

    cout << endl;

    return 0;
}

vector<int> arrGen(const int size){

    vector<int> arr;

    // generar números aleatorios y mostrarlos
    srand(time(NULL));
    cout << "Numeros generados: ";
    for (int i = 0; i < size; i++) {
        arr.push_back(rand() % 100);
        cout << arr[i] << " ";
    }
    cout << endl;

    return arr;
}; 

int maxNumero(vector<int> arr){

    int maximo = arr[0];

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
    }

    return maximo;

};

int minNumero(vector<int> arr){
    int minimo = arr[0];

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }

    return minimo;
};

int sumaArr(vector<int> arr){
    
    int suma = 0;

    for (int i = 0; i < arr.size(); i++) {
       suma += arr[i];
    }

    return suma;
};

float prom(vector<int> arr){
    
    float promedio = static_cast<float>(sumaArr(arr)) / arr.size();

    return promedio;
};