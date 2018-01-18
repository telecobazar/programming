//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

//Pintar cada:
//  - Fila de cuadrados (FILA)
//  - Columna de cuadradois (COLUMNA) - si f+c par * sino ' '
//  - Salto de línea

#include <stdio.h>
#include <stdlib.h>


void pinta_cuadrado(int l){

  for (int fila_cuadrado=0; fila_cuadrado<l; fila_cuadrado++)
    for (int fila=0; fila<l; fila++) {
      for (int Columna_cuadrado=0; Columna_cuadrado<l; Columna_cuadrado++)
        for (int Columna=0; Columna<l; Columna++)
          if ((fila_cuadrado+Columna_cuadrado)%2)
            printf("  ");
          else
            printf(" *");

      printf("\n");
    }
}

int main() {

  int l;

    printf("Introduce el valor del lado: ");
    scanf("%i", &l);


    pinta_cuadrado(l);

  return EXIT_SUCCESS;
}
