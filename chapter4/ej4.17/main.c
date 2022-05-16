#include<stdio.h>

/**
 * Recuperar el dinero se hace más difícil durante los periodos de recesión, de manera que las empresas deben reducir sus límites de 
 * crédito para prevenir que sus cuentas por cobrar (el dinero prestado) se hagan muy grandes. En respuesta a la prolongada recesión,
 * una empresa recortó sus límites de crédito a la mitad. De esta manera, si un cliente en particular tenía un límite de crédito de
 * $2000, ahora su límite es de $1000. Si un cliente tenía un límite de crédito de $5000, este cliente tiene ahora un límite de crédito
 * de $2500. Escriba un programa que analice el estado del crédito de tres clientes de esta empresa. Por cada cliente a usted se le 
 * brinda:
 * a) El número de cuenta del cliente.
 * b) El límite de crédito antes de la recesión.
 * c) El saldo actual del cliente (es decir, el monto que le debe el cliente a la empresa).
 * Su programa debe calcular e imprimir el nuevo límite de crédito para cada cliente, y debe determinar (e imprimir) cuáles clientes
 * tienen saldos que exceden los nuevos límites de crédito.
**/

int main()
{
int cuenta=0, limite=0, saldo=0, contador=0;

while (contador < 3) {
    printf("Ingrese el numero de cuenta \n");
    scanf("%d", &cuenta);

    printf("Ingrese el limite de credito \n");
    scanf("%d", &limite);

    printf("Ingrese el saldo actual \n", &saldo);
    scanf("%d", &saldo);

    printf("el limite de credito actualizado es %d\n", limite/2);
    if (saldo > limite/2) printf("el saldo excede el limite del cliente \n");
    contador++; }

return 0;
}
