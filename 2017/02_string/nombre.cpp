#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define MAGENTA "\x1B[1;35m"

int main(){
  char nombre[256];

  printf(AZUL "Dime tu nombre: " NORMAL);
  scanf(" %s", nombre);
  printf(AMARILLO "Hola, %s. ¿Qué tal estás?\n" NORMAL, nombre);

  return EXIT_SUCCESS;
}
