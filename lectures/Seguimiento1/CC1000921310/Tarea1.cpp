//Juan Andrés González Moncada CC1000921310
//Seguimiento 1 Tarea 1
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  float length = 0; float width = 0; float depth = 0;

  cout << "The purpose of this program is calculating a pool's perimeter, volume and underground surface gives its dimensions" << endl;

  //Ask the user for the pool dimensions 
  cout << endl << "Enter the length of the pool in arbitrary units: \n";
  cin >> length; 

  cout << "Enter the width  of the pool in arbitrary units: \n";
  cin >> width;

  cout << "Enter the average depth of the pool in arbitrary units: \n";
  cin >> depth;
  
  //Makes the obligatory calculations according to the exercise
  float product = length * width;
  float sum = length + width;

  //Uses the obtained values to calculate the asked quantities.
  float perimeter = 2 * sum;
  float volume = product * depth;
  float area = 2 * sum * depth + product;

  cout << endl << "The pool has the following magnitudes:\n";
  cout << "Perimeter: " << setw(3) << fixed << setprecision(2) << perimeter << endl;
  cout << "Volume: " << setw(3) << fixed << setprecision(2) << volume << endl;
  cout << "Underground surface area: " << setw(3) << fixed << setprecision(2) << area << endl;
  
  return 0;
}
