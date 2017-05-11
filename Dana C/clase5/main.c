#include <stdio.h>
#include <stdlib.h>

int main()
{
   int legajo[5];
   int edad[5];
   float salario[5];
   int i;


   for(i=0;i<5;i++)
   {
     printf("Ingrese el legajo: ");
     scanf("%d",&legajo[i]);
     printf("Ingrese la edad: ");
     scanf("%d",&edad[i]);
     printf("Ingrese el salario: ");
     scanf("%f",&salario[i]);

     printf("\n\n");
   }

   for(i=0;i<5;i++)
   {
     printf("\nEl numero de legajo es: %d",legajo[i]);
     printf("\nLa edad del empleado es: %d",edad[i]);
     printf("\nEl salario es: %.2f",salario[i]);

     printf("\n\n");
   }


    return 0;
}
