#include <stdio.h>
#include <stdlib.h>

int potencia(int base, int exp);

int main()
{

    int exp = 0;
    int base = 0;
    int resultado = 0;

    printf("ingrese la base \ningrese el exponente \n");
    scanf("%d%d", &base, &exp);

    resultado = potencia(base, exp);

    printf("el resultado es %d", resultado);

    return 0;
}

int potencia(int base, int exp)
{
    if (exp == 1)
    {
        return base;
    }

    if (exp > 1)
    {
        return (base * potencia(base, --exp));
    }
}
