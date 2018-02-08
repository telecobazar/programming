
//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

// LIBRERÍAS
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <complex.h>

#define M 2
#define K 2
#define N 3

int main(){


  int A[M][K] = { {2, 5}, {3, 7} },
      B[K][N] = { {4, 7, 1}, {6, 2, 3} },
      C[M][N] = { {0, 0, 0}, {0, 0, 0} }; // HAY QUE DEFINIRLA CON CEROS
                                          // SINO DEBERÍAMOS USAR
                                          // bzero(C, sizeof(C));

// BUCLE PARA MULTIPLICAR LA MATRIZ

      for (int f=0; f<M; f++)
          for (int c=0; c<N; c++)
              for (int k=0; k<K; k++)
                  C[f][c] += A[f][k] * B[k][c];

// BUCLE PARA IMPRIMIR LA MATRIZ
      for (int f=0; f<M; f++){
          for (int c=0; c<N; c++)
              printf("%4i", C[f][c]);
          printf("\n");
      }

    return EXIT_SUCCESS;
  }
