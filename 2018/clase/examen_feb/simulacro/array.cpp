#include <stdio.h>
#include <stdlib.h>

#define N 0x100

int main(){

    char nombre[N], nomb2[N], apellidos[N];

    printf("Introduce tu nombre: ");
    scanf("%s %s %s", nombre, nomb2, apellidos);

    printf("Bienvenido %s %s %s\n", nombre, nomb2, apellidos);
    return EXIT_SUCCESS;
}
