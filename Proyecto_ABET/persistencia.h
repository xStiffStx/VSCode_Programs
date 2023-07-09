#ifndef PERSISTENCIA_H_INCLUDED
#define PERSISTENCIA_H_INCLUDED
#include "operaciones.h"

int cargarEmpleados(struct empleado empleados[100]);
void guardarEmpleados(struct empleado empleados[100], int num_emp);

#endif // PERSISTENCIA_H_INCLUDED
