#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

// Estructura para representar una cita
typedef struct {
    int dia;
    int mes;    
    int anio;
    int hora;
    int minutos;
} Cita;

void agendarCita() {
   printf("Has seleccionado Agendar Cita.\n");

    // Por simplicidad, se solicitará al usuario que ingrese la fecha y hora de la cita

    Cita nuevaCita;

    printf("Ingrese la fecha de la cita (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &nuevaCita.dia, &nuevaCita.mes, &nuevaCita.anio);

    printf("Ingrese la hora de la cita (HH:MM): ");
    scanf("%d:%d", &nuevaCita.hora, &nuevaCita.minutos);

    // Aquí se puede procesar y almacenar la cita en una estructura de datos o en una base de datos

    printf("Cita agendada para el %d/%d/%d a las %02d:%02d.\n", nuevaCita.dia, nuevaCita.mes, nuevaCita.anio, nuevaCita.hora, nuevaCita.minutos);
}


void cancelarCita() {
   printf("Has seleccionado Cancelar Cita.\n");

    // Por simplicidad, se solicitará al usuario que ingrese la fecha y hora de la cita a cancelar

    Cita citaCancelar;

    printf("Ingrese la fecha de la cita a cancelar (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &citaCancelar.dia, &citaCancelar.mes, &citaCancelar.anio);

    printf("Ingrese la hora de la cita a cancelar (HH:MM): ");
    scanf("%d:%d", &citaCancelar.hora, &citaCancelar.minutos);

    // Aquí se puede buscar y eliminar la cita de la estructura de datos o base de datos

    printf("Cita del %d/%d/%d a las %02d:%02d cancelada exitosamente.\n", citaCancelar.dia, citaCancelar.mes, citaCancelar.anio, citaCancelar.hora, citaCancelar.minutos);
}

void mostrarMenu() {
    printf("Bienvenido al sistema de agendamiento de citas.\n");
    printf("1. Agendar cita\n");
    printf("2. Cancelar cita\n");
    printf("3. Salir\n");
    printf("Selecciona una opcion: ");
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agendarCita();
                break;
            case 2:
                cancelarCita();
                break;
            case 3:
                printf("Gracias por usar el sistema de agendamiento. ¡Hasta luego!\n");
                break;
            default:
                printf("Opcion invalida. Por favor, selecciona una opcion valida.\n");
                break;
        }
    } while (opcion != 3);

    return 0;
}
