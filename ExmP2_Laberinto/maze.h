#ifndef MAZE_H
#define MAZE_H

#define FILAS 5
#define COLS 5

extern int maze[FILAS][COLS];

void printMaze();

int isValidMove(int fila, int col);

#endif