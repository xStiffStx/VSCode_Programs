#include <stdio.h>

int compararCadenas( char *cadena1,  char *cadena2) { // recorremos caracteres de c1 y c2
    while (*cadena1 && *cadena2) {// Cuando no son nulos
        if (*cadena1 != *cadena2) { // Si son diferentes devuelve 0
            return 0;  
        }
        cadena1++; // Pasamos al siguiente caracter de las cadenas
        cadena2++;
    }

    if (*cadena1 || *cadena2) {
        return 0;  // Las longitudes diferentes, devuelve 0
    }

    return 1;  // Las cadenas son iguales, devuelve 1
}