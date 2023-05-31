#include <stdio.h>
#include <stdlib.h>

int buscarEnArreglo(const int arreglo[], int busqueda, int longitud);

int main(void){
    int numero [] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int busqueda = 15;
    int longitud = sizeof (numero) / sizeof (numero[0]);
    int existentes = buscarEnArreglo(numero, busqueda, longitud);

    printf("Posicion de %d en arreglo: %d", busqueda, existentes);

    return 0;
}