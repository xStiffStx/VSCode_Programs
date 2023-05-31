#include <stdio.h>
#include "magicSquare.h"



int cuadradoMagico(int filas, int columnas, int cuadrado[filas][columnas]) {
    int constMagica = calcularConstanteMagica(filas, columnas, cuadrado);

    // Comprobar la suma de cada fila
    for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (int j = 0; j < columnas; j++) {
            sumaFila += cuadrado[i][j];
        }
        if (sumaFila != constMagica) {
            return 0; // No es cuadrado mágico
        }
    }

    // Comprobar la suma de cada columna
    for (int j = 0; j < columnas; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < filas; i++) {
            sumaColumna += cuadrado[i][j];
        }
        if (sumaColumna != constMagica) {
            return 0; // No es cuadrado mágico
        }
    }

    // Comprobar la suma de la diagonal principal
    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < filas; i++) {
        sumaDiagonalPrincipal += cuadrado[i][i];
    }
    if (sumaDiagonalPrincipal != constMagica) {
        return 0; // No es cuadrado mágico
    }

    // Comprobar la suma de la diagonal secundaria
    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < filas; i++) {
        sumaDiagonalSecundaria += cuadrado[i][columnas - 1 - i];
    }
    if (sumaDiagonalSecundaria != constMagica) {
        return 0; // No es cuadrado mágico
    }

    // Si ha pasado todas las comprobaciones, es cuadrado mágico
    return 1;
}



int calcularConstanteMagica(int filas, int columnas, int cuadrado[filas][columnas]) {
    
    return (filas * (filas * columnas + 1)) / 2;

}

void imprimirCuadrado(int filas, int columnas, int cuadrado[filas][columnas]) {
     for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", cuadrado[i][j]);
        }
        printf("\n");
    }
}