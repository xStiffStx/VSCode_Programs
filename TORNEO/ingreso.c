#include <stdio.h>
#include <string.h>
#include "ingreso.h"

int ingresoEquipos(char equipos[][100]) {
    FILE *archivoEquipos;
    
    archivoEquipos = fopen("equipos.txt", "w+");

    int numEquipos = 0;
    char equipo[100];

    printf("Ingrese los nombres de los equipos (ingrese 'terminar' para finalizar):\n");

    while (1) {
        printf("Equipo %d: ", numEquipos + 1);
        scanf("%s", equipo);

        if (strcmp(equipo, "terminar") == 0) {
            break;
        }

        strcpy(equipos[numEquipos], equipo);
        fprintf(archivoEquipos, "%s\n", equipo);
        numEquipos++;
    }

    fclose(archivoEquipos);

    return numEquipos;
}
