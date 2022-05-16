#include <stdio.h>
#include <math.h>

/**
 * Calcule el valor de 2.5 elevado a la tercera potencia, utilizando la función pow. 
 * Imprima el resultado con una precisión de 2, en un ancho de campo de 10 posiciones. ¿Cuál es el valor que despliega?
**/

int main()
{
    double resultado;

resultado = pow(2.5, 3);

printf("el resultado es %10.2f\n", resultado);

return 0;
}
