#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

void Suma(float *num1, float *num2, float *resultado){
    *resultado = *num1 + *num2;
}

void Resta(float *num1, float *num2, float *resultado){
    *resultado = *num1 - *num2;
}

void Mult(float *num1, float *num2, float *resultado){
    *resultado = *num1 * *num2;
}

void Division(float *num1, float *num2, float *resultado){
    if (*num2 != 0)
    {
        *resultado =  *num1 / *num2;
    }else{
        printf("Error, no se puede dividir entre 0\n");
    }
}