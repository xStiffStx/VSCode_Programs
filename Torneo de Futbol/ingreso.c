#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingresarEquipos() {
    FILE *archivo = fopen("equipos.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo equipos.txt\n");
        exit(1);
    }

    char equipo[50];
    printf("Ingrese los nombres de los equipos (ingrese 'terminar' para finalizar):\n");
    while (1) {
        printf("Equipo: ");
        fgets(equipo, sizeof(equipo), stdin);
        equipo[strcspn(equipo, "\n")] = '\0'; // Eliminar salto de línea del final

        if (strcmp(equipo, "terminar") == 0) {
            break;
        }

        fprintf(archivo, "%s\n", equipo);
    }

    fclose(archivo);
}
