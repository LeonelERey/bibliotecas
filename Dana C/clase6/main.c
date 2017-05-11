#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[5][21];
    int i;

    for(i=0;i<5;i++)
    {
    printf("Ingrese un nombre: ");
    fflush(stdin);
    fgets(nombre[i],20,stdin);

    }

    for(i=0;i<5;i++)
    {
    printf("\nEl nombre del indice %d es: %s ",i,nombre[i]);
    printf("\n");
    }


    return 0;
}
