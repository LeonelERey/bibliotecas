#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "funciones.h"
#include "abm.h"
#define MAX_PROGRAMADORS 50
#define MAX_PROYECTOS 1000

int main()
{
    Eprogramador programador[MAX_PROGRAMADORS];

    //variables
    int opcion = 0;

    //desarrollo

    while(opcion != 9)
    {
        system("cls");
        printf("\n------------ MENU PRINCIPAL ------------");
        opcion = recibeIntRango("\n1 - Alta programador \n2 - Modificar programador \n3 - Baja programador \n4 - Asignar programador a proyecto \n5 - Listar programadores \n6 - Listar proyectos \n7 - Listar proyectos programador \n8 - Proyecto demandante \n9 - Salir\n", "\nNo ha ingresado un numero valido. Reingrese\n", 1, 9);

        switch(opcion)
        {
            case 1:
            altaProgramdor();
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
            break;

            case 6:
            break;

            case 7:
            break;

            case 8:
            break;

            case 9:
            break;

        }
        return 0;
    }
}

