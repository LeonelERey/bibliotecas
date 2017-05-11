#include <stdio.h>
#include <stdlib.h>
#define MAX 4

//CARGA - BUSQUEDA DE MAYOR Y MENOR - BUSQUEDA DE UN NUMERO

int main()
{
    int vec[MAX],i,mayor,menor,nro,flag=0;

    //Carga el vector
    for(i=0;i<MAX;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&vec[i]);
    }

    //buscar mayor y menor
    mayor=vec[0];
    menor=vec[0];

    for(i=0;i<MAX;i++)
    {
      if(vec[i]>mayor)
      {
         mayor=vec[i];
      }

      if(vec[i]<menor)
      {
         menor=vec[i];
      }

    }

    printf("\nEl mayor es: %d", mayor);
    printf("\nEl menor es: %d", menor);


    printf("\n\nIngrese el numero que desea buscar: ");
    scanf("%d",&nro);

    //Busco el numero en el array
    for(i=0;i<MAX;i++)
    {
      if(nro == vec[i])
       {
        flag=1;
       }
    }

    if(flag==0)
    {
      printf("\nEl numero no se encontro!!\n");
    }
    else
    {
      printf("\nSe encontro el numero!!");
    }



    return 0;
}
