#ifndef PLAYER_H
#define PLAYER_H

/// @brief 
extern int playerFIL;
extern int playerCol;
extern int Movimiento_Count;

void initializePlayer();

void mover_arriba();
void mover_abajo();
void mover_izquierda();
void mover_derecha();

int Ganaste();

#endif


