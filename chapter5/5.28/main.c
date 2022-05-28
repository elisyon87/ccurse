#include <stdio.h>

/**
* Escriba una función que tome un valor entero y devuelva el número con los dígitos invertidos. Por ejemplo, dado 
* el número 7631, la función debe regresar 1367.
**/
int cantdigitos(int y);

int main() {

int x=0;

printf("inserte un numero \n");
scanf("%d", &x);

printf("la cantidad de digitos es %d\n", cantdigitos(x));

return 0;

}

int cantdigitos(int y){

int i;
int x=10;
int digitos = 0;

for ( i = 10; x >= 1; i = i * 10 ) {
    x = y / i;
    digitos++;
    }

return digitos;

}
