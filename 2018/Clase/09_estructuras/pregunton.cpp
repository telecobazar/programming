#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero = 0;

  do {
    printf("Dime un número del 1 al 3: ");
    scanf(" %i", &numero);
  } while (numero<1 || numero>3);

    printf("\n");
    printf("No preguntes más\n");

  return EXIT_SUCCESS;
}
