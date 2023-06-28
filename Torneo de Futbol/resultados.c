#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char equipo1[50];
    char equipo2[50];
    int golesEquipo1;
    int golesEquipo2;
} Partido;

typedef struct {
    char nombreEquipo[50];
    int puntos;
} Equipo;

void calcularPuntos() {
    FILE *equiposArchivo = fopen("equipos.txt", "r");
    FILE *resultadosArchivo = fopen("resultados.txt", "r");
    if (equiposArchivo == NULL || resultadosArchivo == NULL) {
        printf("Error al abrir los archivos equipos.txt o resultados.txt\n");
        exit(1);
    }

    Equipo equipos[50];
    int numEquipos = 0;

    char equipo[50];
    rewind(equiposArchivo);
    while (fgets(equipo, sizeof(equipo), equiposArchivo) != NULL) {
        equipo[strcspn(equipo, "\n")] = '\0'; // Eliminar salto de línea del final

        strcpy(equipos[numEquipos].nombreEquipo, equipo);
        equipos[numEquipos].puntos = 0;
        numEquipos++;
    }

    Partido partidos[250];
    int numPartidos = 0;

    char linea[100];
    while (fgets(linea, sizeof(linea), resultadosArchivo) != NULL) {
        char *token = strtok(linea, ",");
        strcpy(partidos[numPartidos].equipo1, token);
        token = strtok(NULL, ",");
        strcpy(partidos[numPartidos].equipo2, token);
        token = strtok(NULL, ",");
        sscanf(token, "%d-%d", &partidos[numPartidos].golesEquipo1, &partidos[numPartidos].golesEquipo2);

        numPartidos++;
    }

    fclose(equiposArchivo);
    fclose(resultadosArchivo);

    for (int i = 0; i < numPartidos; i++) {
        for (int j = 0; j < numEquipos; j++) {
            if (strcmp(partidos[i].equipo1, equipos[j].nombreEquipo) == 0) {
                if (partidos[i].golesEquipo1 > partidos[i].golesEquipo2) {
                    equipos[j].puntos += 3;
                } else if (partidos[i].golesEquipo1 == partidos[i].golesEquipo2) {
                    equipos[j].puntos += 1;
                }
            } else if (strcmp(partidos[i].equipo2, equipos[j].nombreEquipo) == 0) {
                if (partidos[i].golesEquipo2 > partidos[i].golesEquipo1) {
                    equipos[j].puntos += 3;
                } else if (partidos[i].golesEquipo2 == partidos[i].golesEquipo1) {
                    equipos[j].puntos += 1;
                }
            }
        }
    }

    FILE *tablaArchivo = fopen("tabla.txt", "w");
    if (tablaArchivo == NULL) {
        printf("Error al abrir el archivo tabla.txt\n");
        exit(1);
    }

    for (int i = 0; i < numEquipos; i++) {
        fprintf(tablaArchivo, "%s,%d\n", equipos[i].nombreEquipo, equipos[i].puntos);
    }

    fclose(tablaArchivo);
}

void mostrarResultados() {
    FILE *resultadosArchivo = fopen("resultados.txt", "r");
    FILE *tablaArchivo = fopen("tabla.txt", "r");
    if (resultadosArchivo == NULL || tablaArchivo == NULL) {
        printf("Error al abrir los archivos resultados.txt o tabla.txt\n");
        exit(1);
    }

    printf("Resultados de cada partido:\n");
    char linea[100];
    while (fgets(linea, sizeof(linea), resultadosArchivo) != NULL) {
        printf("%s", linea);
    }

    printf("\nTabla de posiciones:\n");
    char equipo[50];
    int puntos;
    while (fscanf(tablaArchivo, "%[^,],%d\n", equipo, &puntos) != EOF) {
        printf("Equipo: %s - Puntos: %d\n", equipo, puntos);
    }

    fclose(resultadosArchivo);
    fclose(tablaArchivo);
}
