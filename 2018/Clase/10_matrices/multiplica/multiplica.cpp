
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

#define M 2
#define N 2
#define P 3

int main(){


  double a[M][N] = {
        {2, 5},
        {3, 7}
  };

  double b[N][P] = {
        {4, 7, 1},
        {6, 2, 3}
  };

  double r[M][P]{
    {0, 0, 0},
    {0, 0, 0}
  };

  for (int i = 0; i < M; i++){
    for (int j = 0; j < P; j++)
      printf("%4.0lf", r[i][j]);
    printf("\n");
  }

  for (int i = 0; i < M; i++){
    for (int j = 0; j < P; j++)
      r[M][P] = 
  }


    return EXIT_SUCCESS;
  }
