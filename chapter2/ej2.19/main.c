#include <stdio.h>

/**
 * Escriba un programa que introduzca tres diferentes enteros desde el teclado, después que imprima la suma, el promedio, el producto, el número más pequeño y el más grande de éstos.
 *  Solamente utilice la forma de selección simple de la instrucción if, que aprendió en este capítulo. El diálogo en la pantalla debe aparecer de la siguiente forma
**/

int main()
{
    int a, b, c, promedio, suma, producto, menor, mayor;

    printf("inserte 3 enteros \n");
    scanf("%d%d%d", &a, &b, &c);

        suma = a + b + c;
        producto = a * b * c;
        promedio = suma/3;
        menor = a;
        mayor = a;
    
    if (b < menor) {menor = b;
    }

    if (c < menor) {menor = c;
    }

    if (b > mayor) {mayor = b;
    }

    if (c > mayor) {mayor = c;
    }

    printf("la suma es %d\n", suma);

    printf("el promedio es %d\n", promedio);

    printf("el producto es %d\n", producto);

    printf("el numero menor es %d\n", menor);   
   
    printf("el numero mayor es %d\n", mayor);

    return 0;
    
}
