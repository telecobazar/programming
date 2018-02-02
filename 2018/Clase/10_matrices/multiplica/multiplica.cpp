
//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

// LIBRERÍAS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>


// DEFINICIÓN
#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"
#define N 2

int main(){

int i, k, j;

  double r[i][j]{
    {0, 0, 0},
    {0, 0, 0}
  };

  double a[i][k] = {
        {2, 5},
        {3, 7}
  };

  double b[k][j] = {
        {4, 7, 1},
        {6, 2, 3}
  };

  for (int j = 0; k < N; k++)
    for (int k = 0; j < N; j++){
      printf("%4.0f\n", r[i][j]);
    for (int i = 0; i < N; i++) {
      printf("%4.0f", r[i][j]);
    }
    }

    return EXIT_SUCCESS;
  }
