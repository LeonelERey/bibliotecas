#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define L 3
#define A 3

int menu()
{
     int opcion;

     printf("\tMENU DE OPCIONES: \n\n");
     printf("1. Alta del programador\n");
     printf("2. Modificar datos del programador\n");
     printf("3. Baja del programador\n");
     printf("4. Asignar programador a proyecto\n");
     printf("5. Listado de programadores\n");
     printf("6. Listado de todos los proyectos\n");
     printf("7. Listar proyectos del programador\n");
     printf("8. Proyecto demandante\n\n");
     printf("9. Salir\n\n");
     printf("Ingrese una opcion: ");
     scanf("%d",&opcion);

     while(opcion > 9 || opcion < 1)
    {
        printf("\nError, opcion no valida. Reingrese: ");
        scanf("%d", &opcion);
    }

    return opcion;


}

void inicializarEstado(eProgramador programador[],int tam)
{
    int i;

   for(i=0;i<tam;i++)
    {
       programador[i].estado = 0;
    }
}

/*

void inicializarEstAut(eAutor autor[],int tam)
{
    int i;

   for(i=0;i<tam;i++)
    {
       autor[i].estado = 0;
    }
}
*/

void altaProgramador(eProgramador programador[], int tam)
{
    int flagEncontro = 0, i;

    for(i=0; i<tam; i++)
    {
        if(programador[i].estado==0)
        {
            printf("\nIngrese ID: ");
            scanf("%d", &programador[i].IdProgramador);

            while(programador[i].IdProgramador > 50)
            {
                printf("\nError!! ID invalido. Reingrese: ");
                scanf("%d",&programador[i].IdProgramador);
            }

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(programador[i].nombre);

            while(strlen(programador[i].nombre) > 30)
            {
                printf("\nError!! Maximo 30 caracteres. Reingrese nombre: ");
                fflush(stdin);
                gets(programador[i].nombre);
            }

            printf("Ingrese Apellido: ");
            fflush(stdin);
            gets(programador[i].apellido);

            while(strlen(programador[i].apellido) > 30)
            {
                printf("\nError!! Maximo 30 caracteres. Reingrese nombre: ");
                fflush(stdin);
                gets(programador[i].apellido);
            }

            printf("Ingrese ID de categoria: ");
            scanf("%d", &programador[i].idCategoria);

            programador[i].estado = 1;
            flagEncontro = 1;

            break;
        }
    }
    if(!flagEncontro)
    {
        printf("No hay espacio suficiente!!!\n");
    }
}


void modificarProgram(eProgramador programador[], int tam)
{
    int flagEncontro=0, i, auxInt, opcion;
    char auxCad[20];
    char respuesta;

    printf("Ingrese el ID del programador: ");
    scanf("%d", &auxInt);

            for(i=0; i<tam; i++)
            {
                if(programador[i].estado == 1)
                {
                    if(auxInt == programador[i].IdProgramador)
                    {
                        printf("%d\t%s\t%s\t%d\t\n", programador[i].IdProgramador, programador[i].nombre, programador[i].apellido,programador[i].idCategoria);

                        printf("\nDesea modificar: \n\n");
                        printf("1. Id\n");
                        printf("2. Nombre \n");
                        printf("3. Apellido\n\n");
                        printf("4. Id de categoria\n\n");
                        printf("Indique opcion: ");
                        scanf("%d",&opcion);

                        switch(opcion)
                        {

                        case 1:
                        printf("Nuevo ID: ");
                        scanf("%d",&auxInt);

                        printf("Esta seguro de realizar la modificacion s/n: ");
                        respuesta = getche();

                          if(respuesta=='s')
                           {
                            programador[i].IdProgramador = auxInt;
                           }
                          else
                            {
                             printf("Accion cancelada por el usuario!!!\n");
                            }

                        break;

                        case 2:
                         printf("Nuevo nombre: ");
                         fflush(stdin);
                         gets(auxCad);

                         printf("\nEsta seguro de realizar la modificacion s/n: ");
                         respuesta = getche();

                          if(respuesta=='s')
                            {
                             strcpy(programador[i].nombre, auxCad);

                            }
                         else
                            {
                             printf("Accion cancelada por el usuario!!!\n");
                            }

                        break;

                        case 3:
                        printf("Nuevo apellido: ");
                         fflush(stdin);
                         gets(auxCad);

                         printf("\nEsta seguro de realizar la modificacion s/n: ");
                         respuesta = getche();

                          if(respuesta=='s')
                            {
                             strcpy(programador[i].apellido, auxCad);

                            }
                         else
                            {
                             printf("Accion cancelada por el usuario!!!\n");
                            }



                        case 4:
                          printf("Nuevo ID de categoria: ");
                          scanf("%d",&auxInt);

                          printf("Esta seguro de realizar la modificacion s/n: ");
                          respuesta = getche();

                          if(respuesta=='s')
                            {
                              programador[i].idCategoria = auxInt;
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


/*void bajaLibro(eLibro libro[], int tam)
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

int buscarAutorXId(eAutor autores[], int idAutor)
{
    int i;
    for(i =0; i<A; i++)
    {
        if(autores[i].estado == 1 && autores[i].IdAutor == idAutor)
        {
            return i;
        }
    }

    return -1;
}


void listarLibros(eLibro libros[], eAutor autor[], int tam1, int tam2)
{
    int i;
    int autorIdAux;
    char auxAutor;

    printf("\nCodigo\tTitulo\t\tAutor\tStock\n");

    for(i=0;i<tam1;i++)
    {
        if(libros[i].estado == 1)
        {
            autorIdAux = buscarAutorXId(autor, autor[i].IdAutor);

            if(autorIdAux != -1)
            {
                strcpy(auxAutor, autor[autorIdAux].apellido);
            }
            else
            {
                sprintf(auxAutor, "ID: %d",libros[i].codAutor);
            }

             printf("%d\t%s\t\t%s\t%d\n", libros[i].codLibro, libros[i].titulo,auxAutor,libros[i].stock);

        }
    }

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

 */





