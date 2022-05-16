#include <stdio.h>

/**
 *Escriba un programa que encuentre el menor de varios enteros. Suponga que el primer valor a leer especifica el numero de valores restantes.
**/

int main()
{
    int numero, menor, contador=0;

    printf("ingrese un numero \n");
    scanf("%d", &numero);

    menor = numero;
    contador = numero-1;

    while (contador > 0) {
        printf("ingrese un numero \n");
        scanf("%d", &numero);
        if (numero < menor) menor = numero;
        contador--;
    }

    printf("el numero mas chico ingresado es %d\n", menor);

    return 0;
}
