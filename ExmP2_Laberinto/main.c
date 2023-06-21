#include <stdio.h>
#include "maze.h"
#include "player.h"


void showMenu() {
    printf("\n===== Welcome to Laberinto =====\n");
    printf("1. Juego Nuevo\n");
    printf("2. Creditos\n");
    printf("3. Salir\n");
    
    printf("Ingrese una opción: ");
}

void juegoNuevo() {
    printf("\n===== NEW PLAY =====\n");
    printMaze();
    initializePlayer();

    while (!Ganaste()) {
        char movimiento;
        printf("Movimientos: %d\n", Movimiento_Count);
        printf("Ingrese un movimiento (W: arriba, S: abajo, A: izquierda, D: derecha): ");
        scanf(" %c", &movimiento);

        switch (movimiento) {
            case 'W':
            case 'w':
                mover_arriba();
                break;
            case 'S':
            case 's':
                mover_abajo();
                break;
            case 'A':
            case 'a':
                mover_izquierda();
                break;
            case 'D':
            case 'd':
                mover_derecha();
                break;
            default:
                printf("Movimiento inválido. Intente nuevamente.\n");
        }

        printf("\n");
        printMaze();
    }

    printf("¡Ganaste!\n");
    printf("Movimientos realizados: %d\n", Movimiento_Count);
    if (Movimiento_Count <= 8){ 
        printf("¡Eres un PRO!\n");
    }else if (Movimiento_Count <= 15){ 
        printf("Eres NOVATO :( \n");
    }else { 
        printf("Eres un NOOB!\n");}
}

int main() {
    int opc;
    do {
        showMenu();
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                juegoNuevo();
                break;
            case 2:
                printf("\n By: Steve Torres \n ID Banner: A00102719");
                break;
            case 3:
                printf("¡Hasta la próxima!\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
        printf("\n");
    } while (opc != 3);

    return 0;
}