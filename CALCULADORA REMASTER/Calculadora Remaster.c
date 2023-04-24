#include <stdio.h>

int sumar(int sumando1, int sumando2){
    int suma;
    suma= sumando1 + sumando2;
    //printf("\nLa sumas es:  %d", suma);
    return suma;
}


int restar(int a,int b){
    int resta;
    resta= a - b;
    //printf("\nLa resta es: %d", resta);
    return resta;
}


int multiplicar(int c,int d){
    int multi;
    multi= c * d;
    //printf("\nLa resta es: %d", multi);
    return multi;
}


float dividir(float q,float e){
    float divi;
    if(e == 0){
    //printf("No se puede dividir entre 0");
    return 0;
    }else{
    divi= q / e;
    //printf("\nLa division es: %.2f", divi);
    }
    return divi;
}

void imprimir(int sum, int res, int multipl, float divi){
    printf("\nLa suma  es: %d", sum);
    printf("\nLa resta es: %d", res);
    printf("\nLa multiplicacion es: %d", multipl);
    printf("\nLa division es: %.2f", divi);
}


int main() {
    int num1, num2, num3;
    int suma, resta, multiplica;
    float dividi;
    int opc;
    printf("Insertar primer numero\n");
    scanf("%d", &num1);

    printf("Insertar segundo numero\n");
    scanf("%d", &num2);
    
    suma = sumar(num1,num2);
    resta = restar(num1, num2);
    multiplica = multiplicar(num1, num2);
    dividi = dividir(num1, num2);
    imprimir(suma, resta, multiplica, dividi);
}