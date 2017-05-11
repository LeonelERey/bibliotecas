#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define P 3
#define R 3


int main()
{
    char seguir = 's', confirma;

    eProgramador programadores[P];
    //eAutor autores[]={{1,"Ernesto", "Sabato"}, {2,"Isabel", "Allende"}, {3,"Eduardo", "Galeano"}, {4,"Miguel", "De Cervantes"}};

    inicializarEstado(programadores,P);
    //inicializarEstAut(autores,A);

    do{

     switch(menu())
     {

      case 1:
      altaProgramador(programadores, P);
      system("cls");
      break;

      case 2:
      //modificarLibro(libros,L);
      system("cls");
      break;

      case 3:
      //bajaLibro(libros,L);
      system("cls");
      break;

      case 4:
      //mostrarLibros(libros,L);
      system("pause");
      system("cls");
      break;

      case 5:
      //mostrarAutores(autores,A);
      system("pause");
      system("cls");
      break;

      case 6:
      //ordenarLibros(libros,L);
      system("pause");
      system("cls");
      break;

      case 7:
      //listarLibros(libros,autores,L,A);
      system("pause");

      break;

      case 8:

         printf("Confirma el cierre del programa? s/n: ");
         confirma = tolower(getche());
         if(confirma == 's')
         {
           seguir = 'n';
         }

          break;

     }

    }while(seguir == 's');


    return 0;
}


