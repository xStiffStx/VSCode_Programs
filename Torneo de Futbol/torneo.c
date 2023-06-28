#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingresarResultadosManual() {
    FILE *equiposArchivo = fopen("equipos.txt", "r");
    FILE *resultadosArchivo = fopen("resultados.txt", "w");
    if (equiposArchivo == NULL || resultadosArchivo == NULL) {
        printf("Error al abrir los archivos equipos.txt o resultados.txt\n");
        exit(1);
    }

    char equipo1[50], equipo2[50];
    char resultado[10];
    rewind(equiposArchivo);

    while (fgets(equipo1, sizeof(equipo1), equiposArchivo) != NULL) {
        equipo1[strcspn(equipo1, "\n")] = '\0'; // Eliminar salto de línea del final

        FILE *temp = fopen("equipos.txt", "r");
        while (fgets(equipo2, sizeof(equipo2), temp) != NULL) {
            equipo2[strcspn(equipo2, "\n")] = '\0'; // Eliminar salto de línea del final

            if (strcmp(equipo1, equipo2) != 0) {
                printf("Ingrese los resultados para el partido entre %s y %s\n", equipo1, equipo2);
                printf("Goles de %s: ", equipo1);
                scanf("%s", resultado);
                fprintf(resultadosArchivo, "%s,%s,%s\n", equipo1, equipo2, resultado);
            }
        }

        fclose(temp);
    }

    fclose(equiposArchivo);
    fclose(resultadosArchivo);
}

void generarResultadosAutomaticos() {
    FILE *equiposArchivo = fopen("equipos.txt", "r");
    FILE *resultadosArchivo = fopen("resultados.txt", "w");
    if (equiposArchivo == NULL || resultadosArchivo == NULL) {
        printf("Error al abrir los archivos equipos.txt o resultados.txt\n");
        exit(1);
    }

    char equipo1[50], equipo2[50];
    rewind(equiposArchivo);

    while (fgets(equipo1, sizeof(equipo1), equiposArchivo) != NULL) {
        equipo1[strcspn(equipo1, "\n")] = '\0'; // Eliminar salto de línea del final

        FILE *temp = fopen("equipos.txt", "r");
        while (fgets(equipo2, sizeof(equipo2), temp) != NULL) {
            equipo2[strcspn(equipo2, "\n")] = '\0'; // Eliminar salto de línea del final

            if (strcmp(equipo1, equipo2) != 0) {
                int golesEquipo1 = rand() % 5;
                int golesEquipo2 = rand() % 5;

                fprintf(resultadosArchivo, "%s,%s,%d-%d\n", equipo1, equipo2, golesEquipo1, golesEquipo2);
            }
        }

        fclose(temp);
    }

    fclose(equiposArchivo);
    fclose(resultadosArchivo);
}
