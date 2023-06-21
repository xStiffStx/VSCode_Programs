#include <stdio.h>



int main() {
    char cadena1[] = "Steve";
    char cadena2[] = "Steve";
    
    int resultado = compararCadenas(cadena1, cadena2);
    
    printf("El resultado de comparar '%s' y '%s' es: %d\n", cadena1, cadena2, resultado);
    
    return 0;
}
