// Clase para solución de ecuaciones cuadráticas

class ecuacioncuad
{
public:
ecuacioncuad(); 
void set_coefs();   // le permite al usuario establecer los coeficientes
void get_coefs();   // le permite al usuario obtener los coeficientes

void discriminante(); // calcula el discriminante
void raices(); // calcula las raices

 
private:
float a;
float b;
float c; 
float disc;
float root1;
float root2; 

}; 