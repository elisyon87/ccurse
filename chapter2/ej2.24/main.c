#include <stdio.h>

/**
 * Escriba un programa que lea un entero y que determine e imprima si es par o impar
**/

int main ()
{
    int a;

    printf("ingrese un entero \n");
    scanf("%d", &a);

    if (a%2 == 0) {printf("el numero es par \n");}
    if (a%2 != 0) {printf("el numero es impar \n");}

    return 0;

}
