#include <stdio.h>
#include <stdlib.h>

struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

int main()
{
    struct producto *prod;

    prod = malloc(sizeof(struct producto));

    printf("Introduce el codigo\n");
    scanf("%d",&prod->codigo);
    printf("Introduce la descripcion\n");
    scanf("%s",prod->descripcion);
    printf("Introduce el precio\n");
    scanf("%f",&prod->precio);

    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %s\n", prod->descripcion);
    printf("Precio: %f\n", prod->precio);

    free(prod);
    prod = NULL;

}
