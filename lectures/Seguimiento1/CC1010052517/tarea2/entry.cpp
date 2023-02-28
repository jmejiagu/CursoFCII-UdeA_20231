#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

#include "entry.h"

// Función para el cálculo del SSD
float entry::SSD(string units, float vel, float tReact, float fCoef, float road){
  // units determina qué unidades se usan. 0 -> US, 1 -> métrico
  float cfactor = 0;
  float g = 0;

  if (units == "0"){
    cfactor = 1.47;
    g = 32.2;
  }
  else{
    cfactor = 0.278;
    g = 9.81;
  }

  return  cfactor * (vel * tReact + cfactor * pow(vel,2) / (2 * g * (fCoef + road)));
}

// Recibe los datos del usuario y llama a SSD
float* entry::get_data(){
  
  cout << "Sistema de medida. Ingrese \"US\", \"us\" ó \"0\" para sistema gringo, cualquier otro valor para sistema métrico" << endl;
  cin >> unit;
  if (unit == "US" || unit == "us" || unit == "0" || unit == "0"){
    unit = "0";
    speed_unit = "mph";
    d_unit = "ft";
  }
  else {
    unit = "1";
    speed_unit = "km/h";
    d_unit = "m";
    }

  cout << "¿Velocidad? ";
  cin >> V;
  cout << "¿Tiempo de reacción? ";
  cin >> t;
  cout << "¿Coeficiente de fricción? ";
  cin >> f;
  cout << "¿Grado de inclinación? (Decimal) ";
  cin >> r;

  static float data[5] = {stof(unit), V, t, f, r};
  ssd = SSD(unit, V, t, f, r);

  return data;
}


//Reporta el valor calculado
void entry::echo_SSD(){
if (unit == "0"){
  cout << "La distancia de seguridad es " << ssd << " pies" << endl;
}
else
  cout << "La distancia de seguridad es " << ssd << " metros" << endl;
}

// Para imprimir cada una de las líneas de la tabla
void entry::echo_table_line(){
    cout << setw(3) << V << " " << setw(6) << left << speed_unit << 
            setw(14) << setprecision(2) << t <<
            setw(9) << setprecision(3) << f <<
            setw(13) << setprecision(3) << r <<
            setw(6) << setprecision(5) << left << ssd << " " << d_unit << endl;
}
