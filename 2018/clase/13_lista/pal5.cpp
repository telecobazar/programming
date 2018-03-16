#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 0x100

int main{

   char buffer[N];
   char **lista = NULL;
   int longitud;
   int n_palanbras, c_palabras = 0;

   printf("¿Cuántos amigos tienes?");
   scanf(" %i", &n_palabras);

   printf("Introduce tu nombre: ");
   fgets(buffer, N, stdin);
   c_palabras++;

   lista = (char**) realloc(lista, c_palabras * sizeof(char*));
   longitud = strlen(buffer);
   *(lista + c_palabras -1) = (char *) malloc(longitud);
   strncpy(*(lista + c_palabras - 1), buffer, longitud);
   *(*(lista + c_palabras - 1) + longitud - 1) = '\0';
   lista[c_palabras -1][longitud-1]

  return EXIT_SUCCESS;
}
