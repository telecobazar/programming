#include <stdio.h>
#include <stdlib.h>

#define N 3

int main() {

  int Resultado;

  int a[N][N] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
      printf("\n");
      printf("%4i %4i %4i\n", a[0][0], a[0][1], a[0][2]);
      printf("%4i %4i %4i\n", a[1][0], a[1][1], a[1][2]);
      printf("%4i %4i %4i\n", a[2][0], a[2][1], a[2][2]);


  Resultado = (a[0][0]*a[1][1]*a[2][2]) +
              (a[1][0]*a[2][1]*a[0][2]) +
              (a[2][0]*a[0][1]*a[1][2]) -
              (a[0][2]*a[1][1]*a[2][0]) -
              (a[1][2]*a[2][1]*a[0][0]) -
              (a[2][2]*a[0][1]*a[1][0]);

  printf("\n");
  printf("El resultado del determinante es %i\n\n", Resultado);

  return 0;
}
