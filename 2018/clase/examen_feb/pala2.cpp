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

    printf("Introduce tu nombre: ");
    scanf(" %[^\n]", nombre);

    longitud = strlen(nombre);

    l = (char**) realloc(l, 2*sizeof(char*));
    *(l+1) = (char*) malloc (longitud+1);
    strncpy(*(l+1), nombre, sizeof(nombre));

    printf("\n");
    printf("Hola %s\n", *l);
    printf("Hola de nuevo %s\n", *(l+1));

    free(*l);
    free(*(l+1));
    free(l);

    return EXIT_SUCCESS;
}
