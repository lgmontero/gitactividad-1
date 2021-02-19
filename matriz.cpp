#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// se guardaran numeros entre 97 y 122 que son los ASCCI de la a a la z...
int main(void)
{
    char arreglo[3][3];
    int i,j;
    srand(time(NULL));

    // Vamos con la carga de la matriz
    printf("Aguarde, generando la matriz...");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
            arreglo[i][j]=97+rand()%25;
    }
    //Vamos con la Impresion...
    printf("Hemos generado la matriz...");
    for (i=0;i<3;i++)
    {
        printf("\n");
        for (j=0;j<3;j++)
            printf("%3c", arreglo[i][j]);
    }
    return 0;
}
