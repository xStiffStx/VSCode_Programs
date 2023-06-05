#include<stdio.h>
#include <stdlib.h>
#include "maze.h"
#define filas 5
#define columnas 5

void imprimirLaberinto(int laberinto[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", laberinto[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int laberinto[filas][columnas] = {
        {0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 1, 0}
    };
    
    int posX = 0; // Posición inicial del jugador
    int posY = 0;
    
    laberinto[posX][posY] = 2;
    imprimirLaberinto(laberinto);

    int numMovimientos = 0; // Contador de movimientos válidos

    // Moviendo al jugador
    moverJugador();
    
    moverJugador(laberinto, &posX, &posY, 'S', &numMovimientos);
    imprimirLaberinto(laberinto);
    
    moverJugador(laberinto, &posX, &posY, 'W', &numMovimientos);
    imprimirLaberinto(laberinto);
    
    moverJugador(laberinto, &posX, &posY, 'A', &numMovimientos);
    imprimirLaberinto(laberinto);
    
    moverJugador(laberinto, &posX, &posY, 'D', &numMovimientos);
    imprimirLaberinto(laberinto);

    int estadoJuego = verificarEstadoJuego(laberinto, posX, posY);
    
    if (estadoJuego == 1) {
        printf("¡Has ganado!\n");
    } else if (estadoJuego == -1) {
        printf("¡Has perdido!\n");
    } else {
        printf("El juego aún no ha terminado.\n");
    }
    printf("Número de movimientos válidos: %d\n", numMovimientos);
    return 0;
}