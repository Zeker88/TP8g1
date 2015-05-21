#include <stdio.h>
#include <stdlib.h>
#include "pseudoanagrama.h"

void solution(int a) // Imprime los tipos de errores. Función particular del programa
{
    if(a==0)
    printf("No se puede formar la segunda palabra con las letras de la primera\n\n");
    else
    printf("La segunda palabra se puede formar con las letras de la primera!\n\n");

}

int compare(char *p,char *q) //Verifica que la segunda cadena esté contenida en la primera. Reutilizable
{

    unsigned int a=0,b=0, k=0;

   for (a=0 ;  q[a] != '\0';  a++) {
        k=0;
        b=0;
        while (( p[b] != '\0') && (k==0) ) {
            if ( q[a] == p[b++] )
                {
                    k=1;
                     p[(b-1)]='?';
                }

            }

            if(k==0) return k;
    }
    k=1;
    return k;
}

int strcmp (char *m,char *n) //Esta función reutilizable. Compara el tamaño de dos strings devolviendo 1 si la segunda es mayor a la primera y 0 si ocurre lo contraio

{
    int i,j;
    for(i=0; m[i]!='\0'; i++);
    for(j=0; n[j]!='\0'; j++);
    if (i<j)  return 0;
    else return 1;
}
int error (argc) // Función particular. Se utiliza solo para detectar errores de este programa.
{

    if (argc!=3)
    {
        printf("Datos introducidos de forma incorrecta\nPor favor siga las instrucciones en su proxima ejecucion\n");
        return 0;
    }
    else
        return 1;
}

