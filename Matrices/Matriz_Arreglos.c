#include <stdio.h>
#define colu 3
#define fila 3
#define colu2 3
#define fila2 3

void lecturaMatriz(int colum, int filas, int matriz[colu][fila]);
void sumadeMatriz(int colum, int filas, int matriz[colu][fila], int matriz2[colu][fila], int matrizres[colu][fila]);
void imprimirMatriz(int colum, int filas, int matriz[colu][fila]);
void transpuestaMatriz(int colum, int filas, int matriz[colu][fila], int matriztranspuesta[colu][fila]);
void multiplicacionescalarMatriz(int colum, int filas, int matriz[colum][filas], int matriz2[colum][filas]);
void multiplicacionMatriz(int colum, int filas, int colum2, int filas2, int matriz[colum][filas], int matriz2[colum2][filas2], int matrizres[colum][filas2]);

int main() {
    int matriz[colu][fila];
    int matriz2[colu][fila];
    int matrizres[colu][fila];
    
    lecturaMatriz(colu, fila, matriz);
    
    multiplicacionMatriz(colu, fila, colu2, fila2, matriz, matriz2, matrizres);
    
    imprimirMatriz(colu, fila, matrizres);
}

void sumadeMatriz(int colum, int filas, int matriz[colu][fila], int matriz2[colu][fila], int matrizres[colu][fila]) {
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < filas; j++) {
            matrizres[i][j] = matriz[i][j] + matriz2[i][j];
        }
        printf("\n");
    }
}

void lecturaMatriz(int colum, int filas, int matriz[colu][fila]) {
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < filas; j++) {
            printf("\nIngrese el numero en la posicion %d, %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatriz(int colum, int filas, int matriz[colu][fila]) {
    printf("La matriz transpuesta es:\n");
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < filas; j++) {
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void transpuestaMatriz(int colum, int filas, int matriz[colu][fila], int matriztranspuesta[colu][fila]) {
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < filas; j++) {
            matriztranspuesta[j][i] = matriz[i][j];
        }
        printf("\n");
    }
}

void multiplicacionescalarMatriz(int colum, int filas, int matriz[colu][fila], int matriz2[colu][fila]) {
    int a;
    printf("Introduzca un escalar: ");
    scanf("%d", &a);
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < filas; j++) {
            matriz2[i][j] = a * matriz[i][j];
        }
    }
}

void multiplicacionMatriz(int colum, int filas, int colum2, int filas2, int matriz[colum][filas], int matriz2[colum2][filas2], int matrizres[colum][filas2]) {
    if (filas == colum2) {
        for (int i = 0; i < colum; i++) {
            for (int j = 0; j < filas2; j++) {
                matrizres[i][j] = matriz[i][j];
            }
            printf("\n");
        }
    }
}
