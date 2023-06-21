#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"


int main(){

    float num1, num2, resultado;

    printf("\nIngresa el 1er numero: ");
    scanf("\n%f", &num1);
    printf("\nIngresa el 2ndo numero: ");
    scanf("\n%f", &num2);

    Suma(&num1, &num2, &resultado);
    printf("\nLa suma es: %.2f", resultado);

    Resta(&num1, &num2, &resultado);
    printf("\nLa resta es: %.2f", resultado);

    Mult(&num1, &num2, &resultado);
    printf("\nLa  multiplicacion es: %.2f", resultado);

    Division(&num1, &num2, &resultado);
    printf("\nLa division es: %.2f", resultado);

    return 0;

}