#include <stdio.h>
#include <math.h>

/**
 * ejercicio 5.4a
 * La función hipotenusa que toma dos argumentos de punto flotante de precisión doble, lado1 y lado2,
 * y devuelve un resultado de punto flotante de precisión doble
 **/

double hipotenusa (double lado1, double lado2);
double ej54a (void);

/**
 *   ejercicio 5.4b   
 *   La función elMenor que toma tres enteros, x, y, z, y devuelve un entero
**/

int elMenor (int x, int y, int z);
int ej54b (void);

/**
 *   ejercicio 5.4c
 * La función instrucciones que no recibe argumentos y no devuelve valor alguno.
**/

void instrucciones (void);
void ej54c (void);

/**
 *   ejercicio 5.4d
 * La función intAfloat que toma un argumento entero, numero, y devuelve un resultado en punto flotante
**/

float intAfloat (int numero);
float ej54d (void);

int main()
{


}

/**
 * ej 5.4a
**/

double hipotenusa (double lado1, double lado2); {
    return (lado1*lado1 + lado2*lado2);
}

double ej54a (void);{

   double lado1;
   double lado2;

   printf("inserte los lados de un triangulo rectangulo \n")
   scanf("%f%f", lado1, lado2)

   printf("la hipotenusa tiene un valor de: %.2f\n", hipotenusa(lado1, lado2));

   return 0;

}

/**
 * ej 5.4
**/

int elMenor (int x, int y, int z);{

    int menor = x;

    if (y < menor) menor = y;
    if (z < menor) menor = z;

    return menor;
}

int ej54b (void);{
    
    int x, y, z;

    printf("introduzca 3 enteros \n");
    scanf("%d%d%d", x, y, z);

    printf("el menor es: %d\n", menor(x, y, z));

    return 0;
}

/**
 * ej 5.4c
**/

void instrucciones (void);{
    return printf("no se olvide de ejecutar todos los comandos git antes de irse");
}

void ej54c (void);{
    
    printf(instrucciones);

    return 0;
    }

/**
 * ej 5.4d
**/

float intAfloat (int numero);{

return float (numero);

}

float ej54d (void);{

    int numero;

    printf("ingrese un numero entero \n");
    scanf("%d", numero); 

    printf("el numero ingresado es: %.2f\n", intAfloat (numero));

    return 0;   
}
