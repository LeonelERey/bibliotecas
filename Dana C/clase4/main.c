#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro;
    int fact=1;
    int i;


    printf("Ingrese un numero: ");
    scanf("%d",&nro);

    for(i=1;i<nro;i++)
    {
       fact=nro*i;

    }

    printf("\nEl factorial del numero es: %d",fact);

    return 0;
}
