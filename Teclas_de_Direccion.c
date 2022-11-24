#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tecla;

ingresa_tecla:
    printf("Ingresa una tecla: ");

    for (int i = 1; i <= 3; i++)
    {

        tecla = getchar();

        if (tecla == 10)
        {
            goto ingresa_tecla;
        }
    }

    switch (tecla)
    {
    case 65:
        printf("Arriba");
        break;
    case 66:
        printf("Abajo");
        break;
    case 67:
        printf("Derecha");
        break;
    case 68:
        printf("Izquierda");
        break;
    default:
        printf("Desconocido");
        break;
    }

    printf("\n");

    /*Valores de las teclas de direccion (Probado en MacOS)

    27 91 65 10 ARRIBA
    27 91 66 10 ABAJO
    27 91 67 10 DERECHA
    27 91 68 10 IZQUIERDA
    */

    return 0;
}
