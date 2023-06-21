#include <stdio.h>
#include "operaciones.h"

void Suma_escalar(int *arreglo, float tamanio, float escalar) {
    for (int i = 0; i < tamanio; i++) {
        *arreglo = *arreglo  + escalar;
        arreglo++;
    }
}


void Suma_producto(int *arreglo, int tamanio) {
    int acumulado = arreglo[0];
    for (int i = 1; i < tamanio  ; i++) {
        acumulado += arreglo[i];
        arreglo[i] = acumulado;
        acumulado--;
    }
}