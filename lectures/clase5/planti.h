// Definición de la plantilla de función maximo.

template < class T > // o template< typename T >
T maximo( T valor1, T valor2, T valor3 )
{
  T valorMaximo = valor1; // asume que valor1 es maximo
  
  // determina si valor2 es mayor que valorMaximo
  if ( valor2 > valorMaximo ){valorMaximo = valor2;}
  
  // determina si valor3 es mayor que valorMaximo
  if ( valor3 > valorMaximo ){valorMaximo = valor3;}
    
  return valorMaximo;
} // fin de la plantilla de función maximo
