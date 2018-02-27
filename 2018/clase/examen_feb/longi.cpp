#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 0x100

int main(){

    char nombre[N];
    int longitud;

    printf("Introduce tu nombre: ");
    scanf("%s", nombre);

    longitud = strlen(nombre);

    printf("El nombre |%s| tiene |%d|\n", nombre, longitud);

    return EXIT_SUCCESS;
}
