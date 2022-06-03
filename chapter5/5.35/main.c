#include <stdio.h>
#include <stdlib.h>

int random();

void startGame();

int main()
{

    startGame();

    printf("ganaste!");

    return 0;
}

int random()
{

    /**
     * genera un numero aleatorio entre 1 y 1000
     **/

    int x = 1 + rand() % 999;

    while (x < 1)
    {
        x = 1 + rand() % 999;
    }

    return x;
}

void startGame()
{

    int respuesta = 0;
    int numero = random();

    printf("tengo un numero entre 1 y 1000 \npuedes averiguar cual es? \nPor favor escribe la primera respuesta\n");
    scanf("%d", &respuesta);

    while (numero != respuesta)
    {
        if (respuesta > numero)
        {
            printf("muy arriba, intenta otra vez \n");
            scanf("%d", &respuesta);
        }

        else
        {
            printf("muy abajo, intenta otra vez \n");
            scanf("%d", &respuesta);
        }
    }
}
