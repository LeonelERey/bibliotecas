#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define  P  3

//TRABAJO DE LA CLASE 11 Y 12 NO ANDA LA OPCION 2 DE INFORMAR

void informar (eProducto productos[], int tam);


int main()
{
    char seguir = 's';
    int opcion;

    eProducto productos[P];

    inicializarEstado(productos,P);

    do{

     printf("MENU DE OPCIONES: \n\n");
     printf("1. Altas\n");
     printf("2. Modificar\n");
     printf("3. Baja\n");
     printf("4. Mostrar\n");
     printf("5. Ordenar\n");
     printf("6. Salir\n\n");
     printf("Ingrese una opcion: ");
     scanf("%d",&opcion);

     switch(opcion)
     {

      case 1:
      altaProducto(productos,P);
      system("cls");
      break;

      case 2:
      modificarProducto(productos,P);
      system("cls");
      break;

      case 3:
      eliminarProducto(productos,P);
      system("cls");
      break;

      case 4:
      ordenarProductos(productos,P);
      printf("\n");
      mostrarProducto(productos,P);
      system("pause");
      system("cls");
      break;

      case 5:
      informar(productos,P);
      system("pause");
      system("cls");
      break;

      case 6:
      seguir= 'n';
      break;



     }

    }while(seguir == 's');





    return 0;
}


void informar (eProducto productos[],int tam)
{

  int i, opcion, flag = 0 , contProductos = 0;
  int acum = 0;
  float precioProm;
  int minImporte;

  printf("\nInformar sobre: \n\n");
  printf("1. Los datos del/os producto/s de menor Importe\n");
  printf("2. Los datos del/os producto/s que superan el valor de precio promedio\n");
  printf("Indique opcion: ");
  scanf("%d",&opcion);

  if(opcion == 1)
  {

     for(i=0;i<tam;i++)
     {
        if(productos[i].estado == 1){
            if(flag == 0)
            {
                minImporte = productos[i].importe;
                flag = 1;
            }

            if(productos[i].importe< minImporte)
            {

                minImporte = productos[i].importe;

            }
        }
      }

    printf("\nDatos del producto con menor importe: \n");

    for(i=0; i<tam; i++)
    {
        if(productos[i].importe == minImporte){
        printf("\nCodigo\tDescripcion\tImporte\tCantidad\n");
        printf("%d\t%s\t%.2f\t%d\n", productos[i].codProd, productos[i].descripcion, productos[i].importe, productos[i].cantidad);
        }
    }

   }

   else
   {
     if(opcion == 2)
     {

       for(i=0;i<tam;i++)
       {
           if(productos[i].estado == 1){

            acum = acum + productos[i].importe;
            contProductos++;

           }

       }

       precioProm = (acum/contProductos)* 100; //Calculo el precio promedio

       for(i=0;i<tam;i++)
       {
           if(productos[i].estado == 1)
           {

                if(productos[i].importe > precioProm)
                {
                   printf("\nCodigo\tDescripcion\tImporte\tCantidad\n");
                   printf("%d\t%s\t%.2f\t%d\n", productos[i].codProd, productos[i].descripcion, productos[i].importe, productos[i].cantidad);


                }


           }




       }













     }







   }





}




















