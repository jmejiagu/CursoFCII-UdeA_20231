class Quadratic{
public:
  Quadratic();
  float discriminante();
  void root();
  float sol1{0};
  float sol2{0};
  
private:
  float a{0};
  float b{0};
  float c{0};
  float d{0};
  void get_coeff();
  
};
