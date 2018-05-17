#include <stdio.h>
#include <stdlib.h>

void Intercambiar(int num1, int num2);
void IntercambiarPunteros(int *num1, int *num2);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;
    //Intercambiar(edadUno, edadDos);
    IntercambiarPunteros(&edadUno, &edadDos);
    printf("\n Edad 1: %d", edadUno);
    printf("\n Edad 2: %d", edadDos);



    return 0;
}
void Intercambiar(int num1, int num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;

}
void IntercambiarPunteros(int *num1, int *num2)
{
    int aux;
    aux=*num1;
    *num1=*num2;
    *num2=aux;

}
