#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>

#define N 0x100

int main(){

  int longitud, limite;
  char buffer[N];
  char **nombre = NULL;

  printf("Introduce el limite: ");
  scanf(" %i", &limite);

  for(int i = 0; i < limite; i++){
    printf("Introduce nombre: ");
    scanf(" %s", buffer);

    longitud = strlen(buffer);

    nombre = (char**) realloc (nombre, (i+1) * sizeof(char *));

    *(nombre+i) = (char*) realloc (*(nombre+i), longitud * sizeof(char));

    strncpy(*(nombre+i), buffer, longitud);

  }

  printf("\n");

  for(int imp = 0; imp < limite; imp++)
    printf("%s \n", *(nombre+imp));

  printf("\n");

  for(int borra; borra < limite; borra++)
      free(*(nombre+borra));

  free(nombre);



    return EXIT_SUCCESS;
}
