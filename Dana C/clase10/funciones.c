#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define  P  3

void inicializarEstado(eProducto producto[],int tam)
{
    int i;

   for(i=0;i<tam;i++)
    {
       producto[i].estado = 0;
    }
}


void altaProducto(eProducto producto[], int tam)
{
    int flagEncontro = 0, i;

    for(i=0; i<tam; i++)
    {
        if(producto[i].estado==0)
        {
            printf("\nIngrese codigo de producto: ");
            scanf("%d", &producto[i].codProd);
            printf("Ingrese descripcion: ");
            fflush(stdin);
            gets(producto[i].descripcion);
            printf("Ingrese importe: ");
            scanf("%f", &producto[i].importe);
            printf("Ingrese cantidad: ");
            scanf("%d", &producto[i].cantidad);

            producto[i].estado = 1;
            flagEncontro = 1;

            break;
        }
    }
    if(!flagEncontro)
    {
        printf("No hay espacio suficiente!!!\n");
    }
}



void mostrarProducto(eProducto producto[], int tam)
{
    int i;

      printf("Codigo\tDescripcion\tImporte\tCantidad\n");

        for(i=0; i<tam; i++)
        {
            if(producto[i].estado!=0)
            printf("%d\t%s\t%.2f\t%d\n", producto[i].codProd,producto[i].descripcion,producto[i].importe,producto[i].cantidad);

        }

}

void modificarProducto(eProducto producto[], int tam)
{
    int flagEncontro=0, i, auxInt, opcion, auxEntero;
    char auxCad[20];
    float auxFloat;
    char respuesta;

    printf("Ingrese codigo de producto: ");
    scanf("%d", &auxInt);

            for(i=0; i<tam; i++)
            {
                if(producto[i].estado == 1)
                {
                    if(auxInt == producto[i].codProd)
                    {
                        printf("%d\t%s\t%.2f\t%d\n", producto[i].codProd, producto[i].descripcion, producto[i].importe,producto[i].cantidad);

                        printf("Desea modificar: \n\n");
                        printf("1. Descripcion\n");
                        printf("2. Importe\n");
                        printf("3. Cantidad\n\n");
                        printf("Indique opcion: ");
                        scanf("%d",&opcion);

                        switch(opcion)
                        {

                        case 1:

                        printf("Nueva descripcion: ");
                        fflush(stdin);
                        gets(auxCad);

                        printf("Esta seguro de realizar la modificacion s/n: ");
                        respuesta = getche();

                        if(respuesta=='s')
                        {
                            strcpy(producto[i].descripcion, auxCad);

                        }
                        else
                        {
                            printf("Accion cancelada por el usuario!!!\n");
                        }

                        break;

                        case 2:

                        printf("Nuevo importe: ");
                        scanf("%f",&auxFloat);

                        printf("Esta seguro de realizar la modificacion s/n: ");
                        respuesta = getche();

                        if(respuesta=='s')
                        {
                            producto[i].importe = auxFloat;
                        }
                        else
                        {
                            printf("Accion cancelada por el usuario!!!\n");
                        }

                        break;

                        case 3:
                        printf("Nueva cantidad: ");
                        scanf("%d",&auxEntero);

                        printf("Esta seguro de realizar la modificacion s/n: ");
                        respuesta = getche();

                        if(respuesta=='s')
                        {
                            producto[i].cantidad = auxEntero;
                        }
                        else
                        {
                            printf("Accion cancelada por el usuario!!!\n");
                        }

                            break;

                        }


                        flagEncontro=1;
                        break;

                    }

                }
            }
            if(flagEncontro==0)
            {
                printf("Dato inexistente!!\n");
            }
}

void eliminarProducto(eProducto producto[], int tam)
    {
        int flagEncontro=0, i;
        int auxInt;
        char respuesta;

        printf("Ingrese codigo de producto: ");
        scanf("%d", &auxInt);
        for(i=0; i<tam; i++)
        {
            if(producto[i].estado==1)
            {
                if(auxInt == producto[i].codProd)
                {
                    printf("%d\t%s\t%.2f\t%d\n", producto[i].codProd,producto[i].descripcion,producto[i].importe,producto[i].cantidad);

                    printf("Esta seguro de eliminar el dato s/n: ");
                    respuesta = getche();

                    if(respuesta=='s')
                    {
                        producto[i].estado = 0;
                    }
                    else
                    {
                        printf("Accion cancelada por el usuario!!!");
                    }

                    flagEncontro=1;
                    break;

                }

            }
        }
        if(flagEncontro==0)
        {
            printf("Dato inexistente!!\n");

        }
    }

void ordenarProductos(eProducto producto[], int tam)
{
    eProducto aux;
    int i,j,opcion;

    printf("\nDesea ordenar por: \n\n");
    printf("1) Descripcion descendente\n");
    printf("2) Cantidad ascendente\n");
    printf("Indique opcion: ");
    scanf("%d",&opcion);

    if(opcion == 1)
    {
         for(i=0; i<tam-1; i++)
            {
                for(j=i+1; j<tam; j++)
                {
                    if(strcmp(producto[i].descripcion, producto[j].descripcion)<0)
                    {
                        aux=producto[i];
                        producto[i]=producto[j];
                        producto[j]=aux;

                    }
                    else
                    {
                        if(strcmp(producto[i].descripcion, producto[j].descripcion)==0)
                        {
                            if(producto[i].codProd>producto[j].codProd)
                            {
                                aux=producto[i];
                                producto[i]=producto[j];
                                producto[j]=aux;
                            }
                        }
                    }
                }
            }

   }
   else
   {

      if(opcion == 2)
      {

          for(i=0; i<tam-1; i++)
            {
                for(j=i+1; j<tam; j++)
                {
                    if(producto[i].cantidad > producto[j].cantidad)
                    {
                        aux=producto[i];
                        producto[i]=producto[j];
                        producto[j]=aux;

                    }
                    else
                    {
                        if(producto[i].cantidad == producto[j].cantidad)
                        {
                            if(producto[i].codProd>producto[j].codProd)
                            {
                                aux=producto[i];
                                producto[i]=producto[j];
                                producto[j]=aux;
                            }
                        }
                    }
                }
            }
      }

   }



}






