#include <stdio.h>

/**
 * Calcule el producto de los tres entero contenidos en las variables x, y, z, y asigne el resultado a la variable resultado
**/

/**
 * Los incisos anteriores fueron hechos todos juntos. Este incluye e y f.
**/

int main ()
{
    int x;
    int y;
    int z;
    int resultado;

    /**
     * se puede poner int x, y, z, resultado
    **/

    printf("inserte un entero");
    scanf("%d", &x);

    printf("inserte el segundo entero");
    scanf("%d", &y);

    printf("inserte el ultimo entero");
    scanf("%d", &z);

    /**
     * se puede poner printf("inserte 3 enteros");
     * scanf("%d%d%d", &x, &y, &z);
    **/

   resultado = x * y * z;

    printf("El producto es %d\n", resultado);

    return 0;
}
