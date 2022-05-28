#include<stdio.h>
#include<stdlib.h>

int aleatorio(int x);

int main() {

int respuesta = 0;
int numero = 0;

printf("tengo un numero entre 1 y 1000 \npuedes averiguar cual es? \nPor favor escribe la primera respuesta\n");
scanf("%d", &respuesta);

aleatorio(numero);

while (numero != respuesta) {
    if (numero > respuesta) {
        printf("muy arriba, intenta otra vez \n");
        scanf("%d", &numero);}

    else {
        printf("muy abajo, intenta otra vez \n");
        scanf("%d", &numero);
    }
}

printf("ganaste!");

return 0;

}

int aleatorio(int x) {

/**
 * genera un numero aleatorio entre 1 y 1000
**/

x = 1 + rand() % 999;

while (x < 1) {
    x = 1 + rand() % 999;
}

return x;
}
