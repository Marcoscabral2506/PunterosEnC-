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
     printf("\n%p", punteroNumero);
     printf("\n%p", &punteroNumero);
     printf("\n%d", *punteroNumero);

     //printf("%d", *punteroNumero);
     return 0;
}
