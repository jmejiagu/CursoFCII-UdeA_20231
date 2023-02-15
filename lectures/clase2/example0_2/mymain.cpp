#include <iostream>
#include "mysafestuff.h"

using namespace std;

int main()
{
  cout << "Surprise, surprise!" << endl;
  cout << "The combination for Safe 12 is: " << endl;
  cout << SafeCracker(12) << endl;
  cout << "Let's check on Safe 11 too: " << endl;
  cout << SafeCracker(11) << endl;
  return 0;
}
