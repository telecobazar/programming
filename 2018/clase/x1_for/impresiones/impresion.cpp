//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>

int main() {

  int i, maximo;

  printf("Introduce un número mayor o igual a 1: ");
  scanf("%i", &maximo);

if(maximo>1)
{
  for (i = 1; i <= maximo; i++) {

    printf("%i\n", i);
  }
}else{printf("\nEl número es menor a 1\n");}

  return EXIT_SUCCESS;
}
