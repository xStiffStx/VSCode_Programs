#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "torneo.h"

void generarResultados(int numEquipos, char equipos[][100]) {
    FILE *archivoResultados;
    archivoResultados = fopen("resultados.txt", "w");

    int i, j;

    printf("\n¿Desea ingresar manualmente los resultados (1) o generarlos automáticamente (2)? ");
    int opcion;
    scanf("%d", &opcion);

    if (opcion == 1) {
        // Ingresar manualmente los resultados
        printf("\nIngreso manual de resultados:\n");

        for (i = 0; i < numEquipos; i++) {
            for (j = i + 1; j < numEquipos; j++) {
                int golesEquipo1, golesEquipo2;

                printf("%s vs %s: ", equipos[i], equipos[j]);
                scanf("%d %d", &golesEquipo1, &golesEquipo2);

                fprintf(archivoResultados, "%s %s %d %s %d\n", equipos[i], equipos[j], golesEquipo1, equipos[j], golesEquipo2);
            }
        }
    } else if (opcion == 2) {
        // Generar resultados aleatorios
        srand(time(NULL));

        printf("\nGeneración automática de resultados:\n");

        for (i = 0; i < numEquipos; i++) {
            for (j = i + 1; j < numEquipos; j++) {
                int golesEquipo1 = rand() % 5; // Genera un número aleatorio entre 0 y 4
                int golesEquipo2 = rand() % 5;

                printf("%s vs %s: %d - %d\n", equipos[i], equipos[j], golesEquipo1, golesEquipo2);

                fprintf(archivoResultados, "%s %s %d %s %d\n", equipos[i], equipos[j], golesEquipo1, equipos[j], golesEquipo2);
            }
        }
    }

    fclose(archivoResultados);
}
