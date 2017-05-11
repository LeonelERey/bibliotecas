#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "funciones.h"
#include "abm.h"
#define MAX_PROGRAMADORS 50
#define MAX_PROYECTOS 1000
/**
 * \brief Inicializa el estado de todos los producto
 * \param libro es donde se inicializa el estado
 * \param largoCadena indica la longitud maxima
 * \param valor indica lo que vale el estado
 * \return nada al ser un void
 */

void establecerEstadoProgramador(Eprogramador programador[], int largoCadena, int valor)
{
    int i;
    for(i=0; i < largoCadena; i++)
    {
        programador[i].estado = valor;
    }
}

/**
 * \brief busca si hay un espacio disponible para cargar un item
 * \param libro es donde se busca el espacio disponible
 * \param largoCadena indica la longitud maxima
 * \return devuelve la posicion donde hay un espacio disponible y si no lo hay devuelve -1
 */

int buscarEspacioVacioProgramdor(Eprogramador programador[], int largoCadena)
{
    int i;

    for(i=0; i < largoCadena; i++)
    {
        if(programador[i].estado == 0)
        {
            return i;
        }
    }

    return -1;
}

/**
 * \brief busca un item de la structura
 * \param libro es donde se busca el item
 * \param largoCadena indica la longitud maxima
 * \param valor indica el item buscado
 * \return devuelve i si encuentra el item buscado (i = a la posicion del item) y -1 si no lo encuentra
 */

int buscarItemPorCodigoProgramdor(Eprogramador programador[], int largocadena, int valor)
{
    int i;

    for(i=0; i < largocadena; i++)
    {
        if(programador[i].id== valor && programador[i].estado == 1)
        {
            return i;
        }
    }

    return -1;
}

/**
 * \brief ordena los datos ingresados
 * \param libro es de donde obtiene los datos
 * \param largoCadena indica la longitud maxima
 * \return nada al ser un void
 */

void ordenarProgramador(Eprogramador programador[], int largoCadena)
{
    int i;
    int j;
    Eprogramador auxiliarProgramador;

    for(i=0; i < largoCadena - 1; i++)
    {
        if (programador[i].estado == 0)
        {
            continue;
        }

        for(j=i+1; j < largoCadena; j++)
        {
            if(programador[j].estado == 0)
            {
                continue;
            }

            if(strcmp(programador[i].apellido, programador[j].apellido) > 0)
            {
                auxiliarProgramador = programador[j];
                programador[j] = programador[i];
                programador[i] = programador;
            }
            /*else if(strcmp(programador[i].titulo, programador[j].titulo) == 0)
            {
                if(programador[i].codigo > programador[j].codigo)
                auxiliarLibro = programador[j];
                programador[j] = programador[i];
                programador[i] = auxiliarLibro;
            }*/
        }
    }
}


/**
 * \brief lista los datos ingresados
 * \param libro es de donde obtiene los datos
 * \param largoCadena indica la longitud maxima
 * \return nada al ser un void
 */
void listarProgramdor(Eprogramador programador[], int largoCadena)
{
    int i;
    printf("\n| CODIGO  |                      TITULO              | AUTOR | STOCK |");
    for(i=0; i < largoCadena; i++)
        {
            if(programador[i].estado != 0)
            {
                printf("\n| %6d  | %-40s | %5d | %5d |",libro[i].codigo,libro[i].titulo,libro[i].codigoAutor,libro[i].stock);

            }
        }
}

/** \brief Otorga valores a las variables de la estructura
 * \param libro es el nombre de la estructura
 * \param auxiliarIndice es el indice donde se van a guardar los datos
 * \param auxiliarCodigoLibro es el codigo a guardar
 * \param auxiliarCodigoAutor es el codigo del autor a guardar
 * \param auxiliarStock es el stock a guardar
 * \return al ser void no retorna nada
 */

 void definirDatosProgramdor (Eprogramador programador[], int auxiliarIndice, int auxiliarId, char auxiliarNombre [], char auxiliarApellido [], int auxiliarIdCategoria)
 {
     programador[auxiliarIndice].id = auxiliarId;
     strcpy(programador[auxiliarIndice].nombre,auxiliarNombre);
     strcpy(programador[auxiliarIndice].apellido,auxiliarApellido);
     programador[auxiliarIndice].stock = auxiliarIdCategoria;
     programador[auxiliarIndice].estado = 1;


 }


