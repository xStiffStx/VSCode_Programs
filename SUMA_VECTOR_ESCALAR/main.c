#include <stdio.h>
#include "operaciones.h"

int main(){
    int arreglo[] = {1, 2, 3, 4, 5};
    float tamanio = 5;
    float escalar;
    

    printf("Ingresa un escalar: ");
    scanf("%f", &escalar);

    Suma_escalar(arreglo, tamanio, escalar);


    printf("Vector resultante: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;

}