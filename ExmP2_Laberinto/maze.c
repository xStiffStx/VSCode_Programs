#include "maze.h"
#include <stdio.h>
#include "player.h"
int maze[FILAS][COLS] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void printMaze() {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == playerFIL && j == playerCol) {
                printf(" X");
            } else if (maze[i][j] == 0) {
                printf(" 0");
            } else {
                printf(" 1");
            }
        }
        printf("\n");
    }
}

int isValidMove(int fila, int col) {
    if (fila >= 0 && fila < FILAS && col >= 0 && col < COLS && maze[fila][col] == 0)
        return 1;
    else
        return 0;
}