#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operaciones.h"

int comprobarId(struct empleado empleados[100], int num_emp, int id);

void mostrarMenu(){
    printf("\nIntroduce la opcion que desee realizar:\n");
    printf("1- Alta Doctor\n");
    printf("2- Baja Doctor\n");
    printf("3- Listar Doctores\n");
    printf("4- Consultar datos de Doctor\n");
    printf("5- Modificar cedula\n");
    printf("6- Modificar horario\n");
    printf("7- Salir\n");
}

void listarEmpleados(struct empleado empleados[100], int num_emp){
    printf("Listando los datos del empleado: \n");
    for (int i=0; i<num_emp; i++){
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Id del Doctor: %d\n", empleados[i].id);
        printf("Cedula: %d\n", empleados[i].cedula);
        printf("Horario: %s\n",empleados[i].horas);
        printf("\n");
    }
}

int alta(struct empleado empleados[100], int num_emp){
    int creado = 0;
    struct empleado emp;

    fflush(stdin);
    printf("Introduce nombre y apellidos\n");
    gets(emp.nombre);

    printf("Introduce Id del Doctor\n");
    scanf("%d",&emp.id);

    printf("Introduce la cedula\n");
    scanf("%d",&emp.cedula);

    fflush(stdin);
    printf("Introduce el horario semanal\n");
    gets(emp.horas);

    int existe = comprobarId(empleados,num_emp,emp.id);

    if (num_emp < 100){
        if(existe == 0){
            empleados[num_emp] = emp;
            creado = 1;
        }
        else{
            printf("No se puede crear empleado. ID duplicado\n");
        }
    }
    else{
        printf("No se puede dar de alta el empleado. Cupo alcanzado");
    }

    return creado;

}

int baja(struct empleado empleados[100], int num_emp){
    int eliminado = 0;
    int id, indice;

    printf("Introduce el Id del Doctor a dar de baja\n");
    scanf("%d",&id);

    int existe = comprobarId(empleados,num_emp,id);

    if (existe == 1){
        for (int i=0; i<num_emp; i++){
            if (empleados[i].id == id){
                indice = i;
            }
        }

        for (int j=indice; j<num_emp-1; j++){
            empleados[j] = empleados[j+1];
            struct empleado aux;
            empleados[j+1] = aux;
        }
        eliminado = 1;
    }
    else{
        printf("No se puede dar de baja al Doctor. ID no existe\n");
    }

    return eliminado;

}

void consultarDatosEmpleado(struct empleado empleados[100], int num_emp){
    int id;
    printf("Introduce el ID del Doctor cuyos datos quieres consultar\n");
    scanf("%d",&id);

    int existe = comprobarId(empleados,num_emp,id);
    if (existe == 1){
        for (int i=0; i<num_emp; i++){
            if (empleados[i].id == id){
                printf("Listando datos del Doctor con id: %d\n", empleados[i].id);
                printf("Nombre: %s\n",empleados[i].nombre);
                printf("Cedula: %d\n", empleados[i].cedula);
                printf("Horario: %s\n",empleados[i].horas);

            }
        }
    }
    else{
        printf("No se puede consultar los datos del Doctor. ID no existe\n");
    }

}

void modificarCedula(struct empleado empleados[100], int num_emp){

    int id;

    printf("Introduce el ID del Doctor cuya Cedula quieres modificar\n");
    scanf("%d",&id);

    int existe = comprobarId(empleados,num_emp,id);

    if (existe == 1){
        float nuevo_sueldo;
        
        printf("Introduce la nueva Cedula del Doctor\n");
        scanf("%f",&nuevo_sueldo);
        for(int i=0; i<num_emp; i++){
            if (empleados[i].id == id){
                empleados[i].cedula = nuevo_sueldo;
                printf("Cedula actualizada\n");
            }
        }
    }
    else{
        printf("No se puede modificar la Cedula del Doctor. ID no existe\n");
    }
}

void modificarHorario(struct empleado empleados[100], int num_emp){

    int id;

    printf("Introduce el ID del Doctor cuyo horario quieres modificar\n");
    scanf("%d",&id);

    int existe = comprobarId(empleados,num_emp,id);

    if (existe == 1){
        char nuevas_horas[50];
        fflush(stdin);
        printf("Introduce el nuevo horario del Doctor\n");
        gets(nuevas_horas);
        
        for (int i = 0; i < num_emp; i++) {
            if (empleados[i].id == id) {
                if (strlen(nuevas_horas) == strlen(empleados[i].horas) && strcmp(nuevas_horas, empleados[i].horas) == 0) {
                    printf("El horario ya está actualizado\n");
                } else {
                    strcpy(empleados[i].horas, nuevas_horas);
                    printf("Horario actualizado\n");
                }
            }
        }
        
    } else{
        printf("No se puede modificar el horario del Doctor. ID no existe\n");
    }
}

int comprobarId(struct empleado empleados[100], int num_emp, int id){

    int resultado = 0;

    for (int i=0; i<num_emp; i++){
        if (empleados[i].id == id){
            resultado = 1;
        }
    }

    return resultado;

}


