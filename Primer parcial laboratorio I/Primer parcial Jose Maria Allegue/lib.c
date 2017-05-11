#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "funciones.h"
#include "abm.h"
#define MAX_PROGRAMADORS 50
#define MAX_PROYECTOS 1000

void altaProgramador ()
{
            establecerEstadoProgramador(programdor[], MAX_PROGRAMADORS, 0);
            auxiliarIndice = buscarEspacioVacioLibro(libro, CANTIDAD_MAX);
            if(auxiliarIndice == -1)
            {
                printf("\nNo hay mas espacios libres");
                recibeChar("\nEnter para continuar");
                break;
            }

            auxiliarCodigoLibro = recibeStringANumeroRango("\nIngrese el codigo del libro (1 a 5.000): ", "\nNo ha ingresado un valor numerico. Reingrese", 1, 5000);
            if(buscarItemPorCodigoLibro(libro, CANTIDAD_MAX, auxiliarCodigoLibro) != -1)
            {
                printf("\nEl codigo del libro ya existe");
                recibeChar("\nEnter para continuar");
                break;
            }

            auxiliarCodigoAutor = recibeStringANumeroRango("\nIngrese el codigo del autor (1 a 500): ", "\nEl valor ingresado debe ser numerico. Reingrese", 1 , 500);
            auxiliarStock = recibeInt("\nIngrese la cantidad en stock: ");
            while(recibeStringLetras("\nIngrese el titulo del libro: ", auxiliarTitulo) == 0)
            {
                printf("\nEl titulo solo debe contener letras");
                recibeChar("\nEnter para continuar");
                continue;
            }
            definirDatosLibro(libro, auxiliarIndice, auxiliarCodigoLibro, auxiliarTitulo,auxiliarCodigoAutor, auxiliarStock);
}
