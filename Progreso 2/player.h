#ifndef PLAYER_H
#define PLAYER_H

#define filas 5
#define columnas 5

int esMovimientoValido(int laberinto[filas][columnas], int posX, int posY, int nuevaX, int nuevaY);
void moverJugador(int laberinto[filas][columnas], int *posX, int *posY, char direccion);
//int verificarEstadoJuego(int laberinto[filas][columnas], int posX, int posY);

#endif // JUGADOR_H