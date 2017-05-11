#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define P  3
#define R  3

int main()
{
    char seguir = 's';
    eProgramador programadores[P];
    eProyecto proyectos[]={{1,"Junior"}, {2,"SemiSenior"}, {3,"Senior"}};
    InicializarProgramadores(programadores);

    do
    {
        switch(Menu())
        {
            case 1:
                {
                    system("cls");
                    printf("\n--- ALTA PROGRAMADOR ---\n\n");
                    altaProgramador(programadores);
                    system("pause");
                    break;
                }
            case 2:
                {
                    system("cls");
                    printf("\n--- MOSTRAR PROGRAMADORES ---\n\n");
                    MostrarProgramadores(programadores);
                    system("pause");
                    break;
                }
            case 3:
                {
                    system("cls");
                    printf("\n--- MODIFICAR DATOS DEL PROGRAMADOR ---\n\n");
                    modificarProgramador(programadores);
                    system("pause");
                    break;
                }
            case 4:
                {
                    system("cls");
                    printf("\n--- BAJA DEL PROGRAMADOR ---\n\n");
                    bajaProgramador(programadores);
                    system("pause");
                    break;
                }
            case 5:
                {
                    system("cls");
                    printf("\n--- ASIGNAR PROGRAMADOR ---\n\n");
                     AsignarProgramador(programadores, proyectos);
                    system("pause");
                    break;
                }
             case 6:
                {
                    system("cls");
                    printf("\n--- LISTADO DE PROGRAMADORES ---\n\n");
                    listadoDeProgramadores(programadores,proyectos);
                    system("pause");
                    break;
                }
            case 7:
                {
                    system("cls");
                    printf("\n--- LISTADO DE TODOS LOS PROYECTOS ---\n\n");
                    system("pause");
                    break;
                }
            case 8:
                {
                    system("cls");
                    printf("\n--- LISTAR PROYECTOS DE PROGRAMADOR---\n\n");
                    system("pause");
                    break;
                }
             case 9:
                {
                    system("cls");
                    printf("\n--- LISTAR PROYECTOS DE PROGRAMADOR---\n\n");
                    system("pause");
                    break;
                }

            case 10:
                {
                    char confirma;
                    printf("Confirma el cierre del programa? s/n: ");
                    confirma = tolower(getche());
                    if(confirma == 's')
                    {
                        seguir = 'n';
                    }
                    break;
                }

        }
    }while(seguir == 's');

    return 0;
}
