//Juan Andrés González Moncada CC1000921310
//Seguimiento1 Tarea2
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  int unit_system = 0;
  float c = 0; //conversion factor
  float v = 0; //speed
  float t = 0; //reaction time
  float g = 0; //gravity acceleration
  float f = 0; //friction coefficient
  float G = 0; //road grade
  float SSD = 0; //stopping sight distance
  string unit_d = "0";
  string unit_v = "0";

  cout << "The purpose of this program is calculating the stopping sight distance (SSD) given the conditions that will be provided by the user" << endl;

  //Asks the user for the units he's going to use 
  cout << endl << "Define the units you will work with (Enter 0 to use the metric system or 1 to use the U.S customary units) ";
  cin >> unit_system;

  //Sets the variables according to the unit system selected by the user
  switch (unit_system){
    case 0:
      cout << "You selected the metric units system" << endl;
      g = 9.8;
      c = 0.278; //conversion factor km/h to m/s
      unit_v = "km/h";
      unit_d = "m";
    break;
    
    case 1:
      cout << "You selected the U.S customary units system" << endl;
      g = 32.2;
      c = 1.47;  //conversion factor mph -> ft/s
      unit_v = "mph";
      unit_d = "ft";
    break;

    default:
      cout << "You entered an invalid option" << endl;
    return 0;
  }
 
  //Asks the user for the specific values
  cout << endl << "Enter the car's initial speed in " << unit_v << endl;
  cin >> v;

  cout << "Enter the driver's reaction time in seconds \n";
  cin >> t;

  cout << "Enter the road's friction coefficient \n";
  cin >> f;

  cout << "Enter the road grade \n";
  cin >> G;

  //Calculates SSD using the formula
  SSD = c * (v * t + (c * v * v) / ( 2 * g * (f + G)));
    
  //Displays the obtained SSD.
  cout << endl << "Given the conditions, the SSD is: " << setw(3) << fixed << setprecision(2) << SSD << unit_d << endl;
  
  return 0;
}
