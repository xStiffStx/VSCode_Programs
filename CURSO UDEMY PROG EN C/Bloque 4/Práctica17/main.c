#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    struct cilindro{
        float diametro;
        float carrera;
    };

    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada;
    };

    struct motor motor1;

    printf("Introduce el identificador\n");
    scanf("%d",&motor1.identificador);
    printf("Introduce el diametro del cilindro(mm)\n");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro(mm)\n");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros\n");
    scanf("%d",&motor1.num_cilindros);

    motor1.cilindrada = (motor1.num_cilindros*(motor1.cilindro1.carrera/10)*M_PI*pow((motor1.cilindro1.diametro/10),2))/4;

    printf("Identificador: %d\n",motor1.identificador);
    printf("Diametro(mm): %.2f\n", motor1.cilindro1.diametro);
    printf("Carrera(mm): %.2f\n",motor1.cilindro1.carrera);
    printf("No cilindros: %d\n",motor1.num_cilindros);
    printf("Cilindrada: %.2f\n",motor1.cilindrada);


}
