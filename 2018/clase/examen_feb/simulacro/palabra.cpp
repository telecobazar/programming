#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 0x100

int main(){

    char **l;
    char nombre[N];
    int longitud;

    printf("Introduce tu nombre: ");
    scanf("%[^\n]", nombre);

    longitud = strlen(nombre);

    l = (char**) malloc(sizeof(char*));

    printf("Bienvenido |%s| tu nombre ocupa |%d|\n", nombre, longitud);

    *l = (char*) malloc(longitud+1);

    strncpy(*l, nombre, sizeof(nombre));

    printf("\n");
    printf("%s\n", *l);
    printf("El contenido copiado ha sido: %s\n", nombre);

    free(*l);
    free(l);

    return EXIT_SUCCESS;
}
