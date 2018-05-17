#include <stdio.h>
#include <stdlib.h>

void mostrar(int *puntero, int cant);

int main()
{
    int numeros[3];
    int *puntero;
    int auxiliar=333;
    puntero=numeros;
    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;
    printf("\n numero 1: %d",*puntero);
    printf("\n numero 2: %d",*(puntero+1));
    printf("\n numero 3: %d",*(puntero+2));
    printf("\n numero 4: %d",*(puntero+3));
    printf("\n numero 5: %d",*(puntero+4));
    printf("\n numero original: %d",*numeros);

    mostrar(numeros, 3);



    return 0;
}
void mostrar(int *puntero, int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        printf("\n numero: %d", *(puntero+i));
    }
}
