#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nro, *puntero;

    puntero=&nro;
    nro = 10;


    printf("%d",*puntero);


    return 0;
}
