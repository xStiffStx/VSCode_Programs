#include <stdio.h>
#include "ingreso.h"
#include "torneo.h"
#include "resultados.h"

int main() {
    char equipos[100][100];
    int numEquipos = 0;
    int opc=0;
    printf("Bienvenido \nDeseas ingresar nuevos equipos\n1.Si\n2.No\n");
    scanf("%d", &opc);
    if (opc == 1)
    {
        numEquipos = ingresoEquipos(equipos);
    }
    
    // Pedir ingreso o generación automática de resultados
    generarResultados(numEquipos, equipos);

    // Leer los resultados y calcular los puntos
    calcularPuntos(numEquipos, equipos);

    // Imprimir las tablas de resultados
    imprimirResultados(numEquipos, equipos);
    
    return 0;
}
