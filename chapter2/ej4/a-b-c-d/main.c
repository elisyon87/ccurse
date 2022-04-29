#include <stdio.h>

/**
 * Indique que el programa calculará el producto de tres enteros
**/

int main()
{
    int a;
    int b;
    int c;
    int suma;

    printf("inserte un entero");
    scanf("%d", &a);

    printf("inserte el segundo entero");
    scanf("%d", &b);

    printf("inserte el ultimo entero");
    scanf("%d", &c);

    suma = a + b + c;

    printf("La suma es %d\n", suma);

    return 0;
}