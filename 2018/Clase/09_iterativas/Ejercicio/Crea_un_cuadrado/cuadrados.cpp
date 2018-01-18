//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>

int main() {

  int eleccion, fila, columna;

  printf("Introduce el lado del cuadrado: ");
  scanf("%i", &eleccion);

  for (fila = 1; fila <= eleccion; fila++) {
    printf("\n*");
      for (columna = 1; columna < eleccion; columna++) {
        printf(" *");
      }

  }
printf("\n\n");

return EXIT_SUCCESS;
}
