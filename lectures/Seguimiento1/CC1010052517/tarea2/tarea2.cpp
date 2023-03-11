#include <vector>
#include <iostream>

#include "entry.h"

using namespace std;


int main(){
    // Las entradas son objetos que se guardan en el vector entries
    vector <entry> entries;

    cout << "Este programa calcula la distancia de frenado de un vehículo (Stopping Sight Distance)\n\n";
    cout << "Ingrese la información de acuerdo a lo requerido\n";

    int keep_going = 1;
    while (keep_going == 1){
        entry new_entry;
        new_entry.get_data();
        new_entry.echo_SSD();
        // Añade la entrada al final del vector
        entries.push_back(new_entry);
        cout << "\n";
        cout << "¿Desea agregar otra entrada? 1 para sí, otro valor para no\n";
        cin >> keep_going;
    }

    // Encabezado de la tabla 
    cout << "Tabla de resultados\n";
    cout << setw(10) << left << "Velocidad"<<
            setw(15) << left << "Reacción (s)"<<
            setw(10) << left << "Fricción"<<
            setw(14) << left << "Inclinación"<<
            setw(6) << "SSD" << endl;

    // Itera sobre todas las entradas del vector e imprime la info de la tabla
    for (entry e : entries){
        e.echo_table_line();
    }
}
