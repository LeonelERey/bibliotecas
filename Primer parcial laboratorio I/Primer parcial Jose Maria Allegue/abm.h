#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "funciones.h"
#include "abm.h"
#define MAX_PROGRAMADORS 50
#define MAX_PROYECTOS 1000

void establecerEstadoProgramador(Eprogramador programador[], int largoCadena, int valor);
int buscarEspacioVacioProgramdor(Eprogramador programador[], int largoCadena);
int buscarItemPorCodigoProgramdor(Eprogramador programador[], int largoCadena, int valor);
void ordenarProgramdor (Eprogramador programador[], int largoCadena);
void listarProgramdor (Eprogramador programador[], int largoCadena);
void definirDatosProgramdor (Eprogramador programador[], int auxiliarIndice, int auxiliarId, char auxiliarNombre [], char auxiliarApellido [], int auxiliarIdCategoria);





