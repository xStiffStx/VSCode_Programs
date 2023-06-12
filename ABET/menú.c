#include <stdio.h>
#include <stdlib.h>

// Estructura para representar una cita
typedef struct {
    int dia;
    int mes;
    int anio;
    int hora;
    int minutos;
} Cita;

Cita citasAgendadas[100]; // Arreglo de las citas agendadas
int numCitasAgendadas = 0; // Contador del número de citas agendadas


void agendarCita() {
   printf("Has seleccionado Agendar Cita.\n");

    // Por simplicidad, se solicitará al usuario que ingrese la fecha y hora de la cita

    Cita nuevaCita;

    printf("Ingrese la fecha de la cita (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &nuevaCita.dia, &nuevaCita.mes, &nuevaCita.anio);

    printf("Ingrese la hora de la cita (HH:MM): ");
    scanf("%d:%d", &nuevaCita.hora, &nuevaCita.minutos);

    citasAgendadas[numCitasAgendadas] = nuevaCita;
    numCitasAgendadas++;

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

void mostrarCitasAgendadas() {
    printf("Citas agendadas:\n");
    
    if (numCitasAgendadas == 0) {
        printf("No hay citas agendadas.\n");
        return;
    }
    
    for (int i = 0; i < numCitasAgendadas; i++) {
        Cita cita = citasAgendadas[i];
        printf("Cita %d:\n", i + 1);
        printf("Fecha: %d/%d/%d\n", cita.dia, cita.mes, cita.anio);
        printf("Hora: %02d:%02d\n", cita.hora, cita.minutos);
        printf("---------------------\n");
    }
}

void mostrarMenu() {
    printf("Bienvenido al sistema de agendamiento de citas.\n");
    printf("1. Agendar cita\n");
    printf("2. Cancelar cita\n");
    printf("3. Mostrar citas agendadas\n");
    printf("4. Salir\n");
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
                mostrarCitasAgendadas();
                break;
            case 4:
                printf("Gracias por usar el sistema de agendamiento. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción inválida. Por favor, selecciona una opcion valida.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}
