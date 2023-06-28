#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"
#include "torneo.h"
#include "resultados.h"

int main() {
    // Pedir ingreso de equipos y almacenarlos en "equipos.txt"
    ingresarEquipos();

    // Pedir al usuario el método para obtener los resultados
    int opcion;
    printf("¿Cómo desea obtener los resultados?\n");
    printf("1. Ingresar manualmente\n");
    printf("2. Generar automáticamente\n");
    printf("Ingrese el número de la opción: ");
    scanf("%d", &opcion);

    // Generar o ingresar los resultados según la opción seleccionada
    if (opcion == 1) {
        // Ingresar manualmente los resultados
        ingresarResultadosManual();
    } else if (opcion == 2) {
        // Generar automáticamente los resultados
        generarResultadosAutomaticos();
    } else {
        printf("Opción inválida. Saliendo del programa.\n");
        return 0;
    }

    // Leer los resultados y calcular los puntos obtenidos por cada equipo
    calcularPuntos();

    // Mostrar los resultados
    mostrarResultados();

    return 0;
}
