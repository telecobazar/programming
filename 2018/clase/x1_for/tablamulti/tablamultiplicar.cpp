//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>

// PROGRAMA QUE IMPRIMA N TABLA DE MULTIPLICAR

int main() {

  int numero, tabla, resultado;

  printf("Introduce el número: ");
  scanf("%i", &numero);
  printf("\n");

  printf("La tabla es la siguiente\n\n");

  // MULTIPLICA - HASTA - SUMANDO DE UNO EN UNO
  // INICIO     FIN       SUMA 1
  for(tabla=1; tabla<11; tabla++) {

    resultado=numero*tabla;
    printf("%i x %i = %i\n", numero, tabla, resultado );
  }
  printf("\n");

  return EXIT_SUCCESS;
}
