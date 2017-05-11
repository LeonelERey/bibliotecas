#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define L 3
#define A 4


int main()
{

    char seguir = 's';
    int opcion;

    eLibro libros[L];
    eAutor autores[]={{1,"Ernesto", "Sabato"}, {2,"Isabel", "Allende"}, {3,"Eduardo", "Galeano"}, {4,"Miguel", "De Cervantes"}};

    inicializarEstado(libros,L);
    inicializarEstAut(autores,A);

    do{

     printf("MENU DE OPCIONES: \n\n");
     printf("1. Altas\n");
     printf("2. Modificar\n");
     printf("3. Baja\n");
     printf("4. Mostrar libros\n");
     printf("5. Mostrar Autores\n");
     printf("6. Ordenar\n");
     printf("7. Listar libros\n");
     printf("8. Salir\n\n");
     printf("Ingrese una opcion: ");
     scanf("%d",&opcion);

     switch(opcion)
     {

      case 1:
      altaLibro(libros,L);
      system("cls");
      break;

      case 2:
      modificarLibro(libros,L);
      system("cls");
      break;

      case 3:
      bajaLibro(libros,L);
      system("cls");
      break;

      case 4:
      mostrarLibros(libros,L);
      system("pause");
      system("cls");

      break;

      case 5:
      mostrarAutores(autores,A);
      system("pause");
      system("cls");
      break;

      case 6:
      ordenarLibros(libros,L);
      system("pause");
      system("cls");
      break;

      case 7:
      listarLibros(libros,autores,L,A);
      system("pause");
      system("cls");
      break;

      case 8:
      seguir= 'n';
      break;


     }

    }while(seguir == 's');


    return 0;
}













