#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include <time.h>
#define  P 3
#define R 3

int Menu()
{
    int opcion;
    system("cls");

     printf("\tMENU DE OPCIONES: \n\n");
     printf("1. Alta del programador\n");
     printf("2. Mostrar programadores\n");
     printf("3. Modificar datos del programador\n");
     printf("4. Eliminar programador\n");
     printf("5. Asignar programador a proyecto\n");
     printf("6. Listado de programadores\n");
     printf("7. Listado de todos los proyectos\n");
     printf("8. Listar proyectos del programador\n");
     printf("9. Proyecto demandante\n\n");
     printf("10. Salir\n\n");
     printf("Ingrese una opcion: ");
     scanf("%d",&opcion);

    while(opcion > 10 || opcion < 1)
    {
        printf("\nError, opcion no valida. Reingrese: ");
        scanf("%d", &opcion);
    }

    return opcion;
}

void InicializarProgramadores(eProgramador programadores[])
{
    int i;
    for(i = 0; i < P; i++)
    {
       programadores[i].estado = 0;
       programadores[i].IdProgramador = 0;
    }
}

int PosicionLibre(eProgramador programadores[])
{
    int indice = -1;
    int i;

    for(i = 0; i < P; i++)
    {
        if(programadores[i].estado == 0)
        {
            indice = i;
            break;
        }
    }

    return indice;
}


void altaProgramador(eProgramador programadores[])
{
    int indice;

    indice = PosicionLibre(programadores);

    if(indice != -1)
    {
            printf("\nIngrese ID: ");
            scanf("%d", &programadores[indice].IdProgramador);

            printf("\nIngrese el nombre: ");
            fflush(stdin);
            gets(programadores[indice].nombre);

            while(strlen(programadores[indice].nombre) > 24)
            {
                printf("\n\tError Maximo 24 caracteres. Reingrese nombre: ");
                fflush(stdin);
                gets(programadores[indice].nombre);
            }

            printf("\nIngrese apellido: ");
            fflush(stdin);
            gets(programadores[indice].apellido);

            while(strlen(programadores[indice].apellido) > 24)
            {
                printf("\nError Maximo 24 caracteres. Reingrese apellido: ");
                fflush(stdin);
                gets(programadores[indice].apellido);
            }

            printf("\nIngrese el ID de categoria: ");
            fflush(stdin);
            scanf("%d", &programadores[indice].idCategoria);

            programadores[indice].estado = 1;

            printf("\nEl alta fue procesada exitosamente.\n\n");
        }
        else
     {
        printf("\nNo hay espacio disponible para el alta.\n");
        system("pause");

     }



}

int buscarPorId(eProgramador programadores[], int id)
{
    int i;
    for(i = 0; i < P; i++)
    {
        if(programadores[i].estado == 1 && programadores[i].IdProgramador == id)
        {
            return i;
        }
    }

    return -1;
}

void MostrarProgramadores(eProgramador programadores[])
{
    int i;
    for(i = 0; i < P; i++)
    {
        if(programadores[i].estado == 1)
        {
            printf("ID: %d\n", programadores[i].IdProgramador);
            printf("DNI: %d\n",programadores[i].idCategoria);
            printf("NOMBRE Y APELLIDO: %s %s\n\n", programadores[i].nombre, programadores[i].apellido);
        }
    }
}


void modificarProgramador(eProgramador programadores[])
{
    int id, auxInt;
    int indice;
    int opcion;
    char auxCad[30];
    char respuesta;

    printf("\nIngrese id del programador: ");
    fflush(stdin);
    scanf("%d", &id);

    indice = buscarPorId(programadores, id);

    if(indice == -1)
    {
         printf("\nID [%d] no encontrado en el registro del sistema\n\n", id);
    }
    else
    {
        printf("\nDatos del programador a Modificar \n\n");

        printf("ID: %d\n", programadores[indice].IdProgramador);
        printf("NOMBRE Y APELLIDO: %s %s\n\n", programadores[indice].nombre, programadores[indice].apellido);
        printf("ID de categoria: %d\n", programadores[indice].idCategoria);

        printf("\nDesea modificar: \n\n");
        printf("1. Id\n");
        printf("2. Nombre \n");
        printf("3. Apellido\n");
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

        if(respuesta =='s')
        {
            programadores[indice].IdProgramador = auxInt;
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
            strcpy(programadores[indice].nombre, auxCad);

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
            strcpy(programadores[indice].apellido, auxCad);

        }
        else
        {
            printf("Accion cancelada por el usuario!!!\n");
        }

        break;

        case 4:
        printf("Nuevo ID de categoria: ");
        scanf("%d",&auxInt);

        printf("Esta seguro de realizar la modificacion s/n: ");
        respuesta = getche();

        if(respuesta=='s')
        {
            programadores[indice].idCategoria = auxInt;
        }
        else
        {
            printf("Accion cancelada por el usuario!!!\n");
        }

        break;


           printf("\nLa modificacion fue procesada exitosamente.\n\n");
    }

   }
}

void bajaProgramador(eProgramador programadores[])
{
     int id;
     int indice;
     char respuesta;

     printf("\nIngrese ID del programador: ");
     scanf("%d", &id);

     indice = buscarPorId(programadores, id);

     if(indice == -1)
     {
         printf("\nID [%d] no encontrado en el registro del sistema\n\n", id);
     }
     else
     {
        printf("\nDatos del Programador \n\n");

        printf("ID: %d\n", programadores[indice].IdProgramador);
        printf("Nombre y apellido: %s %s\n\n", programadores[indice].nombre, programadores[indice].apellido);
        printf("ID de categoria: %d\n", programadores[indice].idCategoria);

        printf("\n\nConfirma la eliminacion del registro? [s/n] ");
        fflush(stdin);
        scanf("%c", &respuesta);

        if(respuesta == 's')
        {
            programadores[indice].estado = 0;
            printf("\nBaja efectuada exitosamente\n");
        }
        else
        {
            printf("\n\nLa baja fue cancelada...\n\n");
        }
    }
}

int PosicionLibreProyecto(eProyecto proyectos[])
{
     int indice = -1;
     int i;

     for(i=0; i< R; i++)
     {
         if(proyectos[i].estado ==0)
         {
             indice=i;
             break;
         }
     }
     return indice;
 }


void AsignarProgramador(eProgramador programadores[], eProyecto proyectos[])
{
    int idProgram;
    int indice;
    int idP;
    int hs;

    indice = PosicionLibreProyecto(proyectos);

    if(indice != -1)
    {
        printf("\nIngrese ID del programador: ");
        fflush(stdin);
        scanf("%d", &idP);

        idProgram = buscarPorId(programadores, idP);

        if(idProgram == 0)
        {
            printf("\nEl programador no se encuentra en el registro de datos. \n");
        }
        else
        {
            proyectos[indice].estado = ASIGNADO;

            printf("\nSeleccione proyecto: \n\t [1] JUNIOR \n\t [2] SEMISENIOR \n\t [3] SENIOR \n\t ");
            scanf("%d", &programadores[indice].idCategoria);

            while(programadores[indice].idCategoria > 3 || programadores[indice].idCategoria <1)
            {
                printf("\nError, opcion invalida. Reingrese: ");
                scanf("%d", &programadores[indice].idCategoria);
            }

             printf("\n\nIndique las hs que debera trabajar: ");
             scanf("%d",&hs);


            printf("\nEl proyecto fue asignado exitosamente: \n\n");
        }
    }
    else
    {
        printf("\nNo se pudo asignar proyecto!!");
    }

}




void listadoDeProgramadores(eProgramador programadores[], eProyecto proyectos[])
{

    int i;
    int j;

    for(i = 0; i < P; i++)
    {
        if(programadores[i].estado != 0)
        {
            for(j = 0; j < P; j++)
            {
                {
                    printf("ID: %d\n", programadores[j].IdProgramador);
                    printf("NOMBRE Y APELLIDO: %s %s\n\n", programadores[j].nombre, programadores[j].apellido);



                 }
             }
        }

   }



}



