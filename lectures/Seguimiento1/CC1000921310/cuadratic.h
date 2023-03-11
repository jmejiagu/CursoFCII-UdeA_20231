//Juan Andrés González Moncada CC1000921310

class CuadraticSolver {     // The class
  public:     
    CuadraticSolver();
    void setCoefficients();
    void RootType();
    void CalculateRoots();
  private:
    float a;
    float b;
    float c;
    float discriminate; //Asked private variables
};

int main() {
  CuadraticSolver cuadratic1;  
  cuadratic1.RootType();
  cuadratic1.CalculateRoots();
  return 0;
}