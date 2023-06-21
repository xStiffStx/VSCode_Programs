#include <stdio.h>
#include "operaciones.h"

void Suma_escalar(int *arreglo, float tamanio, float escalar) {
    for (int i = 0; i < tamanio; i++) {
        *arreglo = *arreglo  + escalar;
        arreglo++;
    }
}