#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Users y pass definidos
#define max_users 3
#define max_longitud_user 20
#define max_longitud_contra 20

void operacionTransporte();
float Calc_precio_ruta(int tipo_ruta, float dis);
float calcularDescuento(float costoTotal, float dis);
void redSocial();

int Login(){
    char users[max_users][max_longitud_user];// elimiar los mas long
    char pass[max_users][max_longitud_contra];
    int intentos = 0;
    int i;

    // Preestablecer user y pass
    strcpy(users[0], "Reykno");
    strcpy(pass[0], "gato");
    strcpy(users[1], "Piolas");
    strcpy(pass[1], "doblehh");
    strcpy(users[2], "Newton");
    strcpy(pass[2], "usa");

    while (intentos < 3){  // Bucle de intentos
        char usuario [max_longitud_user];
        char contrasenas [max_longitud_contra];
        printf("\nIngrese su Usuario: ");
        scanf("%s", usuario);
        printf("\nIngrese su Contrasena: ");
        scanf("%s", contrasenas);

        for (i=0; i < max_users; i++){
            if (strcmp(usuario, users[i]) == 0 && strcmp(contrasenas, pass[i]) == 0) {
                printf("Inicio de sesion exitoso. \n");
                return 0;
            }
        }
        intentos++;
        printf("Usuario o Contrasena incorrectos. Intento #%d \n", intentos);
    }
    printf("Ingreso Denegado. Se alcanzo el numero maximo de intentos.\n");
    return 0;
}


float Calc_precio_ruta(int tipo_ruta, float dis){
    float precio_km;
    switch (tipo_ruta){
	    case 1:
	        precio_km = dis * 0.10;
	        break;
	    case 2:
	        precio_km = dis * 0.15;
	        break;
	    case 3:
	        precio_km = dis * 0.20;
	        break;    
	    default:
	        printf("Tipo de ruta invalido...");
            return 0;
	        break;
    }
    return precio_km;
}

float calcularDescuento(float costoTotal, float dis){
    float descuento =0.0;
    if (dis < 50){
        descuento = 0.0;
    }else if (dis < 100){
        descuento = costoTotal * 0.05;
    }else if (dis < 500) {
        descuento =costoTotal * 0.1;
    }else {
        descuento = costoTotal * 0.2;
    }
    return descuento;
}

void operacionTransporte(){
    int tipo_ruta; 
    float dis;
    float precioPorKM;
    for(int i=0; i < 5; i++){
        printf("Que tipo de ruta deseas ?\n");
        printf("\n1. Ruta Urbana");
        printf("\n2. Ruta Interurbana");
        printf("\n3. Ruta Internacional");
        printf("\nIngrese el tipo de ruta: ");
        scanf("%d", &tipo_ruta);
        printf("\nIngrese la distancia en kilometros: ");
        scanf("%f", &dis);
        float costoTotal =  Calc_precio_ruta(tipo_ruta, dis);
        float descuento = calcularDescuento(costoTotal, dis);
        float precioFinal = costoTotal - descuento;

        printf("Subtotal: %2f\n", costoTotal);
        printf("Descuento: %2f\n", descuento);
        printf("Precio total: %2f\n", precioFinal);
        return;
    }
}

void redSocial(){//funcion de red social
    char mensaje[50], categoria [10];
    int numNoticias = 0, numEventos = 0, numPreguntas = 0;
    int i;
    for (int i = 0; i < 5; i++){
        printf ("Mensaje %d:", i);
        fgets (mensaje, sizeof (mensaje),stdin);
        printf("Categoría (Noticias, Eventos, Preguntas): ");
        fgets(categoria, sizeof(categoria), stdin);
        // Eliminamos el salto de línea del final de la cadena
        mensaje[strcspn(mensaje, "\n")] = 0;
        categoria[strcspn(categoria, "\n")] = 0;
        // Clasificamos el mensaje según la categoría ingresada
        switch (categoria[0]) {
            case 'N':
            case 'n':
                printf("Mensaje clasificado como Noticias\n");
                numNoticias++;
                break;
            case 'E':
            case 'e':
                printf("Mensaje clasificado como Eventos\n");
                numEventos++;
                break;
            case 'P':
            case 'p':
                printf("Mensaje clasificado como Preguntas\n");
                numPreguntas++;
                break;
            default:
                printf("Categoria no valida\n");
                break;  
        }
    } 
    printf("Resumen de publicaciones:\n");
    printf("Noticias: %d\n", numNoticias);
    printf("Eventos: %d\n", numEventos);
    printf("Preguntas: %d\n", numPreguntas);
    
    return;
}


void menu(){
    int opc;
    do{
        printf("\n Bienvenido al Menu de Rutas y Tarifas!\n");
        printf("1. Operacion de Transporte \n");
        printf("2. Interactuar en la Red Social \n");
        printf("3. Salir\n");
        printf("\nIngresa una opcion: ");
        scanf(" %d", &opc);
        switch (opc){
            case 1:
                operacionTransporte();
                break;
            case 2:
                redSocial();
                break;
            case 3: 
                printf("\nSaliendo del programa...\n");
                break;    
            default:
                printf("\nOpcion Invalida. Itenta otra vez...\n");
                break;
        } 
	}while(opc != 3);	
}


int main(){
    int resultado_login = Login();
    if (resultado_login == 0){
       menu(); 
    }
    return 0;
}
