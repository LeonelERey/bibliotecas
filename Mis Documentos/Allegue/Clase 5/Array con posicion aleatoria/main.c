#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int v[5],pos,i;
    char seguir;

    for(i=0;i<5;i++)
    v[i]=0; // inicializamos vector

    do
    {
        printf("Ingrese posici¢n "); //La c rara es para colocar el ascento
        scanf("%d",&pos);
        printf("Ingrese valor a cargar en el vector ");
        scanf("%d",&v[pos]); //En realidad no es aleatorio porque se introduce a mano el valor
        printf("Desea ingresar otro dato S/N? ");
        scanf("%c",&seguir);
    }
    while(seguir=='s'); //Esta por si sw quiere modificar algun datos de los anteriormente introducidos
}
//Falta agregar el printf() mostrando los datos colocados
