#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

struct empleado{
    char nombre[255];
    int id;
    int cedula;
    char horas[50];
};

void mostrarMenu();
void listarEmpleados(struct empleado empleados[100], int num_emp);
int alta(struct empleado empleados[100], int num_emp);
int baja(struct empleado empleados[100], int num_emp);
void consultarDatosEmpleado(struct empleado empleados[100], int num_emp);
void modificarCedula(struct empleado empleados[100], int num_emp);
void modificarHorario(struct empleado empleados[100], int num_emp);

#endif // OPERACIONES_H_INCLUDED
