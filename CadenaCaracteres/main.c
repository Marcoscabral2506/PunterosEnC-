#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20]="MiNombre";
    char *apellido="MiApellido";
    char *puntero;
    puntero= nombre;
    printf("%s", nombre);
    printf("\n%s", apellido);
    printf("\n%s", puntero);

    int i;
    for(i=0; *(apellido+i)!='\0'; i++)  //apenas encuentre el primer \0 significa que termino la palabra
    {
            printf("\n%c", *(apellido+i));
    }

    return 0;
}
