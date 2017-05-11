#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int v[5],i;
    for (i=0;i<5;i++)
    {
        printf("\nIngrese valor a cargar en el vector ");
        scanf("%d",&v[i]);
        printf("n El valor de la variable es: %d", v[i]); //Siempre ingresar el numero del valor entre []

    }
}
