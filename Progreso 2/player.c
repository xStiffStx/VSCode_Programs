#include <stdio.h>
#include <stdlib.h>
#include "player.h"

#define filas 5
#define columnas 5


int esMovimientoValido(int laberinto[filas][columnas], int posX, int posY, int nuevaX, int nuevaY) {
    if (nuevaX >= 0 && nuevaX < filas && nuevaY >= 0 && nuevaY < columnas && laberinto[nuevaX][nuevaY] != 1) {
        return 1; // Movimiento válido
    } else {
        return 0; // Movimiento inválido
    }
}

void moverJugador(int laberinto[filas][columnas], int *posX, int *posY, char direccion) {
    int nuevaX = *posX;
    int nuevaY = *posY;
    
    switch (direccion) {
        case 'W': // Arriba
            nuevaX = *posX - 1;
            break;
        case 'A': // Izquierda
            nuevaY = *posY - 1;
            break;
        case 'S': // Abajo
            nuevaX = *posX + 1;
            break;
        case 'D': // Derecha
            nuevaY = *posY + 1;
            break;
        default:
            printf("Movimiento inválido.\n");
            return;
    }
    
    if (nuevaX >= 0 && nuevaX < filas && nuevaY >= 0 && nuevaY < columnas && laberinto[nuevaX][nuevaY] != 1) {
        laberinto[*posX][*posY] = 0; // Actualizar la posición anterior del jugador
        *posX = nuevaX;
        *posY = nuevaY;
        laberinto[*posX][*posY] = 2; // Actualizar la nueva posición del jugador
    } else {
        printf("Movimiento inválido.\n");
    }
}

int verificarEstadoJuego(int laberinto[filas][columnas], int posX, int posY) {
    if (laberinto[posX][posY] == 3) {
        return 1; // El jugador ha ganado
    } else if (laberinto[posX][posY] == 1) {
        return -1; // El jugador ha perdido
    } else {
        return 0; // El juego aún no ha terminado
    }
}




