#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
#include "persistencia.h"

int main()
{
    int opcion;
    int num_doctores = 0;
    struct doctor doctores[100];

    num_doctores = cargar_Doctores(doctores);
    
    printf("BIENVENIDOS AL GESTOR DE DOCTORES\n");
    mostrarMenu();
    scanf("%d",&opcion);

    while(opcion != 7){
        
        if(opcion == 1){
            int creado = alta(doctores, num_doctores);
            if (creado == 1){
                num_doctores++;
            }
        }
        else if(opcion == 2){
            int eliminado = baja(doctores, num_doctores);
            if (eliminado == 1){
                num_doctores--;
            }
        }
        else if(opcion == 3){
            listar_Doctores(doctores, num_doctores);
        }
        else if(opcion == 4){
            consultar_Datos_Doctor(doctores, num_doctores);
        }
        else if(opcion == 5){
            modificar_Cedula(doctores, num_doctores);
        }
        else if(opcion == 6){
            modificar_Horario(doctores, num_doctores);
        }
        else if(opcion > 7 || opcion < 1){
            printf("Por favor solo opciones entre 1-7");
        }
        mostrarMenu();
        scanf("%d",&opcion);
    }

    guardarEmpleados(doctores, num_doctores);
    printf("GRACIAS POR USAR EL GESTOR DE DOCTORES. HASTA PRONTO!\n\n");
}
