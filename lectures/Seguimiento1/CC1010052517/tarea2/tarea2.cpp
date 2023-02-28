#include <vector>
#include <iostream>

#include "entry.h"

using namespace std;


int main(){
    vector <entry> entries;

    int keep_going = 1;
    while (keep_going == 1){
        cout << "Ingrese la información de acuerdo a lo requerido\n";
        entry new_entry;
        new_entry.get_data();
        new_entry.echo_SSD();
        entries.push_back(new_entry);
        cout << "\n";
        cout << "¿Desea agregar otra entrada? 1 para sí, otro valor para no\n";
        cin >> keep_going;
    }

    cout << "Tabla de resultados\n";
    cout << setw(10) << left << "Velocidad"<<
            setw(15) << left << "Reacción (s)"<<
            setw(10) << left << "Fricción"<<
            setw(14) << left << "Inclinación"<<
            setw(6) << "SSD" << endl;

    for (entry e : entries){
        e.echo_table_line();
    }
}
