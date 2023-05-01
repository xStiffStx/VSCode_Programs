#include <stdio.h>

int main() {
    int piso_actual = 0; 
    int piso_llamada, piso_seleccionado;
    char opc;
    do {
        printf("\n--- MENU DEL ASCENSOR ---\n");
        printf("1. Llamar ascensor\n");
        printf("2. Seleccionar piso\n");
        printf("3. Mostrar piso actual\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%c", &opc);


        switch (opc) {
            case '1':   
                printf("Ingrese el piso desde donde llama al ascensor (0-9): ");
                scanf("%d", &piso_llamada);

                if (piso_llamada < 10) {
                    if (piso_llamada == piso_actual) {
                        printf("El ascensor ya se encuentra en el piso %d\n", piso_actual);
                    } else {
                        printf("Moviendo ascensor...\n");
                        if (piso_llamada > piso_actual) {
                            for (int i = piso_actual + 1; i <= piso_llamada; i++) {
                                printf("Ascensor en piso %d\n", i);
                            }
                        } else {
                            for (int i = piso_actual - 1; i >= piso_llamada; i--) {
                                printf("Ascensor en piso %d\n", i);
                            }
                        }
                        piso_actual = piso_llamada;
                    }
                }
            break;

            case '2':
                printf("Ingrese el piso al que desea ir (0-9): ");
                scanf("%d", &piso_seleccionado);

                if (piso_seleccionado < 10) {
                    if (piso_seleccionado == piso_actual) {
                        printf("El ascensor ya se encuentra en el piso %d\n", piso_actual);
                    } else {
                        printf("Moviendo ascensor...\n");
                        if (piso_seleccionado > piso_actual) {
                            for (int i = piso_actual + 1; i <= piso_seleccionado; i++) {
                                printf("Ascensor en piso %d\n", i);
                            }
                        } else {
                            for (int i = piso_actual - 1; i >= piso_seleccionado; i--) {
                                printf("Ascensor en piso %d\n", i);
                            }
                        }
                        piso_actual = piso_seleccionado;
                    } 
                }
            break;

            case '3':
                switch (piso_actual) {
                    case 0:
                        printf("El ascensor se encuentra en la planta baja\n");
                        break;
                    case 1:
                        printf("El ascensor se encuentra en el primer piso\n");
                        break;
                    case 2:
                        printf("El ascensor se encuentra en el segundo piso\n");
                        break;
                    case 3:
                        printf("El ascensor se encuentra en el tercer piso\n");
                        break;
                    default:
                        printf("El ascensor se encuentra en el piso %d\n", piso_actual);
                        break;
                }
            break;

            case '4':
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intente nuevamente.\n");
                break;   
                   
        } getchar();
    }while(opc != '4');
    return 0;
}
