//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>


int main(void) {
  //Pintar cada:
  //  - Fila de cuadrados (FILA)
  //  - Columna de cuadradois (COLUMNA) - si f+c par * sino ' '
  //  - Salto de línea

  int l = 6;

  for (int fc=0; fc<l; fc++)
    for (int f=0; f<l; f++) {
      for (int cc=0; cc<l; cc++)
        for (int c=0; c<l; c++)
          if ((fc+cc)%2)
            printf("  ");
          else
            printf(" *");

      printf("\n");
    }

  return EXIT_SUCCESS;
}
