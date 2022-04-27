#include <stdio.h>

/**
 * Si numero no es igual que 7, imprima “La variable numero no es igual que 7
**/

int main()
{
    int numero;
    printf ("introduzca un numero \n");
    scanf ("%d", &numero);

    if (numero != 7) {
        printf ("La variable numero no es igual que 7");
    }
    return 0;
}