#include "player.h"
#include "maze.h"
#include <stdio.h>

int playerFIL;
int playerCol;
int Movimiento_Count;

void initializePlayer() {
    playerFIL = 0;
    playerCol = 0;
    Movimiento_Count = 0;
}

void mover_arriba() {
    if (isValidMove(playerFIL - 1, playerCol)) {
        playerFIL--;
        Movimiento_Count++;
    } else {
        printf("Movimiento inválido. No puedes moverte hacia arriba.\n");
    }
}

void mover_abajo() {
    if (isValidMove(playerFIL + 1, playerCol)) {
        playerFIL++;
        Movimiento_Count++;
    } else {
        printf("Movimiento inválido. No puedes moverte hacia abajo.\n");
    }
}

void mover_izquierda() {
    if (isValidMove(playerFIL, playerCol - 1)) {
        playerCol--;
        Movimiento_Count++;
    } else {
        printf("Movimiento inválido. No puedes moverte hacia la izquierda.\n");
    }
}

void mover_derecha() {
    if (isValidMove(playerFIL, playerCol + 1)) {
        playerCol++;
        Movimiento_Count++;
    } else {
        printf("Movimiento inválido. No puedes moverte hacia la derecha.\n");
    }
}

int Ganaste() {
    if (playerFIL == FILAS - 1 && playerCol == COLS - 1)
        return 1;
    else
        return 0;
}