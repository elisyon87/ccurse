#include<stdio.h>

/**
 * Una empresa de ventas por correo vende cinco productos diferentes cuyos precios de lista mostramos en la siguiente tabla:
 * Número de producto Precio de lista
 * 1     $2.98
 * 2     $4.50
 * 3     $9.98
 * 4     $4.49
 * 5     $6.87
 * Escriba un programa que lea una serie de pares de números de la siguiente manera:
 * a) Número de producto.
 * b) Cantidad vendida durante el día.
 * Su programa debe utilizar una instrucción switch para ayudar a determinar el precio de lista de cada producto.
 * Su programa debe calcular y desplegar el valor total de venta de todos los productos vendidos la semana pasada
**/

int main()
{
    int producto=0, cantidad=0;
    float prod1=0, prod2=0, prod3=0, prod4=0, prod5=0;
   
    while (contador != -1) {

        printf("inserte el numero de producto vendido. -1 para finalizar \n");
        scanf("%d", &producto);

        printf("inserte la cantidad vendida \n");
        scanf("%d", &cantidad);   
       
            switch (producto)
            {
            case 1:
                prod1 = prod1 + (float) cantidad * 2.98;
                break;

            case 2:
                prod2 = prod2 + (float) cantidad * 4.50;
                break;

            case 3:
                prod3 = prod3 + (float) cantidad * 9.98;
                break;

            case 4:
                prod4 = prod4 + (float) cantidad * 4.49;
                break;

            case 5:
                prod5 = prod5 + (float) cantidad * 6.87;
                break;
                      
            default:
                printf("producto no valido \n");
                
            }

    }
    
printf("La cantidad de dinero obtenido por la venta del producto 1 es de %.2f\n, prod1");
printf("La cantidad de dinero obtenido por la venta del producto 2 es de %.2f\n, prod2");
printf("La cantidad de dinero obtenido por la venta del producto 3 es de %.2f\n, prod3");
printf("La cantidad de dinero obtenido por la venta del producto 4 es de %.2f\n, prod4");
printf("La cantidad de dinero obtenido por la venta del producto 5 es de %.2f\n, prod5");

return 0;

}
