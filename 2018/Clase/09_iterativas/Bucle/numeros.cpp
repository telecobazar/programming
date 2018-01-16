//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

#define MAX 3

int main() {

  for (int d=0; d<10; d++)
    for (int u=0; u<10; u++)
      printf("%i%i\n", d, u);

  return EXIT_SUCCESS;
}
