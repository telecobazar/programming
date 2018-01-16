//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define MAX 3

int main(void) {
  int numero = 0;
  int oportunidades = MAX;

  do {
    __fpurge(stdin);
    printf("Dime un número del 1 al 3: ");
    scanf(" %i", &numero);
    oportunidades--;
  } while ( (numero<1 || numero>3) && oportunidades);

    printf("\n");
    printf("No preguntes más\n");

  return EXIT_SUCCESS;
}
