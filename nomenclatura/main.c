#include <stdio.h>
#include <stdlib.h>

int main()
{
     // Punteros
     int *punteroNumero;
     int numero;
     int numeroDos;

     numero= 66;
     numeroDos=&numero;
     punteroNumero= &numero;
     //*punteroNumero=&numero;
     //*punteroNumero=55;
     printf("\n%d", numero);
     printf("\n%d", numeroDos);
    numeroDos=*punteroNumero; //asigno valor
     printf("\n%d", &numero);
     printf("\n%p", punteroNumero);  //muestra la direccion de memoria del valor
     printf("\n%p", &punteroNumero); //muestra la direccion de memoria del puntero
     printf("\n%d", *punteroNumero); //muestra valor

     //printf("%d", *punteroNumero);
     return 0;
}
