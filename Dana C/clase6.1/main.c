#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char texto[20];
    char nombre[20];
    char nombre2[20];
    int cant;
    printf("Ingrese el password: ");
    gets(texto);

    if(strcmp(texto,"1234")==0)
     printf("\nPassword correcto");
    else
     printf("\nPassword incorrecto");


     printf("\n\nIngrese un nombre: ");
     gets(nombre);

     strcpy(nombre2,nombre);

     printf("El nombre de la variable nombre es: %s",nombre);
     printf("\nEl nombre de la variable nombre2 es: %s",nombre2);

     cant=strlen(nombre);

     printf("\n\nLa cantidad de caracteres del nombre es: %d",cant);



    return 0;
}
