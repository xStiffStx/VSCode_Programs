#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char opcion;
    do {
        menu();
        scanf("%c", &opcion);
        switch (opcion) {
            case '1':
                area_circulo(&area);    
                break;
            case '2':
                per_Circulo(&perimetro);
                break;
            case '3':
                mostrar_piso_actual(piso_actual);
                break;
            case '4':
                
                break;
            case '5':
                llamar_ascensor(&piso_actual);
                break;
            case '6':
                printf("Saliendo del programa...\n");
                break;        
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
                break;
        }
        getchar();
    } while (opcion != '6');
    return 0;
}

void menu() {
    printf("\n--- CALCULADORA DE FIGURAS ---\n");
    printf("1. Calcular Circulo\n");
    printf("2. Calcular Triangulo\n");
    printf("3. Calcular Rectangulo\n");
    printf("4. Calcular Cuadrado\n");
    printf("5. Calcular Trapecio\n");
    printf("6. Salir\n");
    printf("Ingrese una opcion: ");
}

float area_circulo(float area){
    float area, radio;

    printf( "\n Digita el radio: " );
    scanf( "%f", &radio );

    area = 3.141592 * radio * radio;

    printf( "\n   El area de la circunferencia es: ",area );

    printf( "\n\n   Pulse una tecla para salir..." );
    getch(); /* Pausa */
   
    return 0;
}

float per_Circulo(float perimetro){
    float perimetro, radio;
	
    printf( "\n   Introduzca radio: " );
    scanf( "%f", &radio );

    perimetro = 2 * 3.141592 * radio;

    printf( "\n   El perimetro es: %f",perimetro );

    getch(); 

    return 0;
}
void area_triangulo(){
    int contador;
    float altura, base;

    printf( "\n   Introduzca base (real): " );
    scanf( "%f", &base );
    printf( "\n   Introduzca altura (real): " );
    scanf( "%f", &altura );

    contador = 0;

    while ( base != 0 && altura != 0 )
    {
        printf( "\n   El area del triangulo es: \n", base * altura / 2 );
        contador++;
        printf( "\n   Introduzca base (real): " );
        scanf( "%f", &base );
        printf( "\n   Introduzca altura (real): " );
        scanf( "%f", &altura );
    }

    printf( "\n   Ha calculado el area de %d triangulo(s).",contador);
 
    getch(); /* Pausa */

    return 0;
}

void per_triangulo(float perimetro){
    float a, b, c;
    float area;
    float perimetro;
    
    printf("Lado A: ");
    scanf(" %f",&a);
    printf("Lado B: ");
    scanf(" %f",&b);
    printf("Lado C: ");
    scanf(" %f",&c);

    perimetro = a+b+c;
    printf("Perimetro : %.2f\n",perimetro);
}

void area_rectangulo(float area){ 
   float altura, base, area;
   printf("Ingresa el valor de la altura: \n");
   scanf("%f", &altura); 
   printf("Ingresa el valor de la base: \n");
   scanf("%f", &base);
   area = altura*base;
   printf ("Valor de area: %g\n", area);
}

void per_rectangulo(){
    float perimetro, altura, base;
    printf("Ingresa el valor de la altura: \n");
    scanf("%f", &altura); 
    printf("Ingresa el valor de la base: \n");
    scanf("%f", &base);
    perimetro=altura+base+altura+base;
    printf ("Valor de perimetro: %g\n", perimetro);
}

void area_cuadrado(){
}

void per_cuadrado(){
}

void area_trapecio(){ 
}

void per_trapecio(){ 
}