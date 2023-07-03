#include <stdio.h>
#include <string.h>
#include "resultados.h"

void calcularPuntos(int numEquipos, char equipos[][100]) {
    FILE *archivoResultados;
    archivoResultados = fopen("resultados.txt", "r");

    int puntos[numEquipos];
    

    char equipo1[100], equipo2[100];
    int golesEquipo1, golesEquipo2;

    while (fscanf(archivoResultados, "%s %s %d %s %d", equipo1, equipo2, &golesEquipo1, equipo2, &golesEquipo2) != EOF) {
        int indiceEquipo1, indiceEquipo2;

        for (int i = 0; i < numEquipos; i++) {
            if (strcmp(equipo1, equipos[i]) == 0) {
                indiceEquipo1 = i;
            }

            if (strcmp(equipo2, equipos[i]) == 0) {
                indiceEquipo2 = i;
            }
        }

        if (golesEquipo1 > golesEquipo2) {
            puntos[indiceEquipo1] += 3;
        } else if (golesEquipo1 < golesEquipo2) {
            puntos[indiceEquipo2] += 3;
        } else {
            puntos[indiceEquipo1] += 1;
            puntos[indiceEquipo2] += 1;
        }
    }

    fclose(archivoResultados);

    // Ordenar los equipos según los puntos obtenidos (método de la burbuja)
    for (int i = 0; i < numEquipos - 1; i++) {
        for (int j = 0; j < numEquipos - i - 1; j++) {
            if (puntos[j] < puntos[j + 1]) {
                int tempPuntos = puntos[j];
                puntos[j] = puntos[j + 1];
                puntos[j + 1] = tempPuntos;

                char tempEquipo[100];
                strcpy(tempEquipo, equipos[j]);
                strcpy(equipos[j], equipos[j + 1]);
                strcpy(equipos[j + 1], tempEquipo);
            }
        }
    }
}

void imprimirResultados(int numEquipos, char equipos[][100]) {
    printf("\nTabla de resultados:\n");
    printf("Equipo 1\tEquipo 2\tGoles 1\tGoles 2\n");

    FILE *archivoResultados;
    archivoResultados = fopen("resultados.txt", "r");

    char equipo1[100], equipo2[100];
    int golesEquipo1, golesEquipo2;

    while (fscanf(archivoResultados, "%s %s %d %s %d", equipo1, equipo2, &golesEquipo1, equipo2, &golesEquipo2) != EOF) {
        printf("%s\t\t%s\t\t%d\t%d\n", equipo1, equipo2, golesEquipo1, golesEquipo2);
    }

    fclose(archivoResultados);

    printf("\nTabla de posiciones:\n");
    printf("Posición\tEquipo\n");

    for (int i = 0; i < numEquipos; i++) {
        printf("%d\t\t%s\n", i + 1, equipos[i]);
    }
}
