#include <iostream>
#include <iomanip>
#include <tuple>

using namespace std;

// Función para imprimir cada línea de la tabla
void dimensions(float length, float width, float depth){
  float sum = length + width;
  float prod = length * width;

  cout << left << setw(8) << length;
  cout << setw(7) << width;
  cout << setw(7) << fixed << setprecision(1) << depth << setprecision(0);
  cout << setw(11) << 2 * sum;
  cout << setw(8) << prod * depth;
  cout << " " << 2 * sum * depth + prod << endl;
}

int main(){
  short int lengths[] = {25, 25, 25, 25, 30, 30, 30, 30};
  short int widths[] = {10, 10, 10, 10, 12, 12, 12, 12};
  float depths[] = {5, 5.5, 6, 6.5, 5, 5.5, 6, 6.5};

  // Impresión de encabezado
  cout << left << setw(8) << "Length";
  cout << setw(7) << "Width";
  cout << setw(7) << "Depth";
  cout << setw(11) << "Perimeter";
  cout << setw(8) << "Volume";
  cout << " Underground Surface Area" << endl;
 
  for (unsigned int i = 0; i < 8; i++){
    dimensions(lengths[i], widths[i], depths[i]);
  }
  return 0;
}
