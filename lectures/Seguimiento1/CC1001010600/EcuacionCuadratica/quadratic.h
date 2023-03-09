#include <iostream>
#include <cmath>
using namespace std;
class Quadratic{
 public:
  Quadratic();
  void getValues();
  void getDiscriminant();
  void getRoots();
 private:
  float a{0}, b{0}, c{0};
  float disc{0};
};
