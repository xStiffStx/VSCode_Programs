#include <stdio.h>
#include <stdlib.h>
#include "maze.h"
#include "player.h"

void juegoNuevo() {
    int laberinto[filas][columnas] = {
        {0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 1, 0}
    };

    int posX = 0; // Posición inicial del jugador
    int posY = 0;

    laberinto[posX][posY] = 2; // Colocar al jugador en la posición inicial

    imprimirLaberinto(laberinto);

    int numMovimientos = 0; // Contador de movimientos válidos

    char direccion;
    while (1) {
        printf("Ingrese la dirección (W = arriba, A = izquierda, S = abajo, D = derecha): ");
        scanf(" %c", &direccion);

        moverJugador(laberinto, &posX, &posY, direccion, &numMovimientos);

        imprimirLaberinto(laberinto);
    }

    //     int estadoJuego = verificarEstadoJuego(laberinto, posX, posY);
    //     if (estadoJuego == 1) {
    //         printf("¡Has ganado!\n");
    //         break;
    //     } else if (estadoJuego == -1) {
    //         printf("¡Has perdido!\n");
    //         break;
    //     }
    // }

    // printf("Número de movimientos válidos: %d\n", numMovimientos);
}

void mostrarCreditos() {
    printf("Créditos del juego:\n");
    printf("Desarrollado por [Nombre del desarrollador]\n");
}

int main() {
    int opcion;
    do {
        printf("---- Menú ----\n");
        printf("1. Jugar\n");
        printf("2. Créditos\n");
        printf("3. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                juegoNuevo();
                break;
            case 2:
                mostrarCreditos();
                break;
            case 3:
                printf("¡Gracias por jugar!\n");
                break;
            default:
                printf("Opción inválida. Por favor, seleccione una opción válida.\n");
        }

        printf("\n");
    } while (opcion != 3);

    return 0;
}
