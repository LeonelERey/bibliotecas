#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#include "funciones.h"
#include "abm.h"
#define MAX_PROGRAMADORS 50
#define MAX_PROYECTOS 1000

typedef struct{
    int id;
    char nombre [51];
    char apellido [51];
    int idCategoria;
    int estado;
} Eprogramador;

typedef struct{
    float pagoHora;
    char descripcion [51];
    int idCategoria;
} Ecategoria;

typedef struct{
    char nombre [51];
    int idProyecto;
} Eproyecto;

void altaProgramador ();


