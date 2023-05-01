#include <stdio.h>
#include "Calculadora Remaster.h"

void imprimir(int sum, int res, int multipl, float divi){
    printf("\nLa suma  es: %d", sum);
    printf("\nLa resta es: %d", res);
    printf("\nLa multiplicacion es: %d", multipl);
    printf("\nLa division es: %.2f", divi);
}


int main() {
    int num1, num2, num3;
    int suma, resta, multiplica;
    float dividi;
    int opc;
    printf("Insertar primer numero\n");
    scanf("%d", &num1);

    printf("Insertar segundo numero\n");
    scanf("%d", &num2);
    
    suma = sumar(num1,num2);
    resta = restar(num1, num2);
    multiplica = multiplicar(num1, num2);
    dividi = dividir(num1, num2);
    imprimir(suma, resta, multiplica, dividi);
}