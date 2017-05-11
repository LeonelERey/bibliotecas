#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define L 3
#define A 3


void inicializarEstado(eLibro libro[],int tam)
{
    int i;

   for(i=0;i<tam;i++)
    {
       libro[i].estado = 0;
    }
}

void inicializarEstAut(eAutor autor[],int tam)
{
    int i;

   for(i=0;i<tam;i++)
    {
       autor[i].estado = 0;
    }
}


void altaLibro(eLibro libro[], int tam)
{
    int flagEncontro = 0, i;

    for(i=0; i<tam; i++)
    {
        if(libro[i].estado==0)
        {
            printf("\nIngrese codigo de libro: ");
            scanf("%d", &libro[i].codLibro);
            printf("Ingrese titulo: ");
            fflush(stdin);
            gets(libro[i].titulo);
            printf("Ingrese codigo del autor: ");
            scanf("%d", &libro[i].codAutor);
            printf("Ingrese stock: ");
            scanf("%d", &libro[i].stock);

            libro[i].estado = 1;
            flagEncontro = 1;

            break;
        }
    }
    if(!flagEncontro)
    {
        printf("No hay espacio suficiente!!!\n");
    }
}


void modificarLibro(eLibro libro[], int tam)
{
    int flagEncontro=0, i, auxInt, opcion;
    char auxCad[20];
    char respuesta;

    printf("Ingrese codigo de libro: ");
    scanf("%d", &auxInt);

            for(i=0; i<tam; i++)
            {
                if(libro[i].estado == 1)
                {
                    if(auxInt == libro[i].codLibro)
                    {
                        printf("%d\t%s\t%d\t%d\n", libro[i].codLibro, libro[i].titulo, libro[i].codAutor,libro[i].stock);

                        printf("\nDesea modificar: \n\n");
                        printf("1. Codigo de libro\n");
                        printf("2. titulo del libro \n");
                        printf("3. Codigo del autor\n");
                        printf("4. Stock\n\n");
                        printf("Indique opcion: ");
                        scanf("%d",&opcion);

                        switch(opcion)
                        {

                        case 1:
                        printf("Nuevo codigo de libro: ");
                        scanf("%d",&auxInt);

                        printf("Esta seguro de realizar la modificacion s/n: ");
                        respuesta = getche();

                          if(respuesta=='s')
                           {
                            libro[i].codLibro = auxInt;
                           }
                          else
                            {
                             printf("Accion cancelada por el usuario!!!\n");
                            }

                        break;

                        case 2:
                         printf("Nuevo titulo: ");
                         fflush(stdin);
                         gets(auxCad);

                         printf("\nEsta seguro de realizar la modificacion s/n: ");
                         respuesta = getche();

                          if(respuesta=='s')
                            {
                             strcpy(libro[i].titulo, auxCad);

                            }
                         else
                            {
                             printf("Accion cancelada por el usuario!!!\n");
                            }

                        break;


                        case 3:
                          printf("Nuevo codigo del autor: ");
                          scanf("%d",&auxInt);

                          printf("Esta seguro de realizar la modificacion s/n: ");
                          respuesta = getche();

                          if(respuesta=='s')
                            {
                             libro[i].codAutor = auxInt;
                            }
                          else
                            {
                             printf("Accion cancelada por el usuario!!!\n");
                            }

                         break;

                        case 4:
                          printf("Nuevo stock: ");
                          scanf("%d",&auxInt);

                         printf("Esta seguro de realizar la modificacion s/n: ");
                         respuesta = getche();

                          if(respuesta=='s')
                            {
                             libro[i].stock = auxInt;
                            }
                         else
                           {
                            printf("Accion cancelada por el usuario!!!\n");
                           }

                        break;

                      flagEncontro=1;
                        break;

                    } //cierre switch

                }
            }

            if(flagEncontro==0)
            {
                printf("Dato inexistente!!\n");
            }
    }//cierre for


}


void bajaLibro(eLibro libro[], int tam)
    {
        int flagEncontro=0, i;
        int auxInt;
        char respuesta;

        printf("Ingrese codigo del libro: ");
        scanf("%d", &auxInt);
        for(i=0; i<tam; i++)
        {
            if(libro[i].estado==1)
            {
                if(auxInt == libro[i].codLibro)
                {
                    printf("%d\t%s\t%d\t%d\n", libro[i].codLibro,libro[i].titulo,libro[i].codAutor,libro[i].stock);

                    printf("Esta seguro de eliminar el dato s/n: ");
                    respuesta = getche();

                    if(respuesta=='s')
                    {
                        libro[i].estado = 0;
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



void mostrarLibros(eLibro libro[], int tam)
{
    int i;

      printf("\nCodigo\tTitulo\t\tCodAutor\tStock\n");

        for(i=0; i<tam; i++)
        {
            if(libro[i].estado!=0)
            printf("%d\t%s\t%d\t%d\n", libro[i].codLibro, libro[i].titulo, libro[i].codAutor,libro[i].stock);

        }



}


void ordenarLibros(eLibro libro[], int tam)
{
    eLibro aux;
    int i,j;


         for(i=0; i<tam-1; i++)
            {
                for(j=i+1; j<tam; j++)
                {
                    if(strcmp(libro[i].titulo, libro[j].titulo)>0)
                    {
                        aux=libro[i];
                        libro[i]=libro[j];
                        libro[j]=aux;

                    }
                    else
                    {
                        if(strcmp(libro[i].titulo, libro[j].titulo)==0)
                        {
                            if(libro[i].codLibro> libro[j].codLibro)
                            {
                                aux=libro[i];
                                libro[i]=libro[j];
                                libro[j]=aux;
                            }
                        }
                    }
                }
            }


        printf("\nLos libros han sido ordenados exitosamente!!!");


}

void mostrarAutores(eAutor autores[], int tam)
{
    int i;

    printf("\nCodigo\tNombre\tApellido");

    for(i=0; i<4; i++){
        printf("\n%d\t%s\t%s", autores[i].IdAutor, autores[i].nombre, autores[i].apellido);
    }


}

void listarLibros(eLibro libros[], eAutor autor[], int tam1, int tam2)
{
   int i,j;

   for(i=0;i<tam1;i++)
   {
       for(j=0;j<tam2;j++)
         {
            if(libros[i].codAutor == autor[i].IdAutor && libros[i].estado == 1)
            {
                printf("\nCodigo\tTitulo\t\tApellidoAutor\tStock\n");
                printf("%d\t%s\t\t%s\t%d\n", libros[i].codLibro, libros[i].titulo, autor[j].apellido,libros[i].stock);

            }

         }

     }


}















