#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

struct alumno {
char nombre[20];
int nota;

};


int main()
{

 struct alumno pers[MAX],aux;
 int i,j;

 for(i=0;i<MAX;i++)
 {
   printf("Ingrese nombre: ");
   fflush(stdin);
   gets(pers[i].nombre);
   printf("Ingrese nota: ");
   scanf("%d",&pers[i].nota);

   printf("\n\n");

 }

for(i=0;i<MAX-1;i++)
 {
   for(j=i+1;j<MAX;j++)
   {
     if((strcmp(pers[i].nombre,pers[j].nombre))>0)
     {
       aux=pers[i];
       pers[i]=pers[j];
       pers[j]=aux;
     }
   }

  }

 for(i=0;i<MAX;i++)
 {
    printf("Nombre: %s",pers[i].nombre);
    printf("\nNota: %d",pers[i].nota);

    printf("\n\n");


 }


        return 0;
}
