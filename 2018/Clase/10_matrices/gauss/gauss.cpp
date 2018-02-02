#include <stdio.h>
#include <stdlib.h>

#define N 3

void impresion(double a[N][N]){
    printf("\n");
    for (int fila=0; fila<N; fila++){
        for (int columna=0; columna<N; columna++)
           printf("%6.2lf", a[fila][columna]);
        printf("\n");
   }
   printf("\n");
}


int main() {

  double a[N][N] = {
        {2, 3, 4},
        {4, 7, 1},
        {6, 2, 3}
  };
  double coeficiente[N], divisor, determinante=1;
  int celda = 0;


  impresion(a);

// NORMALIZAR LA "FILA"
// APUNTAMOS EL COEFICIENTE "FILA"
// BUSCAMOS LOS CEROS EN LAS "FILINF"
// RESTAMOS A LA "FILA" LA FILA MULTIPLICADA POR A*I*N

  // COMIENZA FILA 0 - HASTA LÍMITE - INCREMENTO 1
  for (int fila = 0; fila < N; fila++){
    /*
      COEFICIENTE ARRAY DONDE GUARDAR EL VALOR,
      LA CELDA ES COEFICIENTE[0] AL INCREMENTARLO EN CELDA++,
      PASARÍA A COEFICIENTE[1] Y ASÍ SUCESIVAMENTE

      EL COEFICIENTE SERÁ IGUAL QUE EL VALOR DEL DIVISOR,
      Y POR LO TANTO TENIENDO EL MISMO VALOR QUE
      EN A[N][N], QUE SERÁN LOS VALORES DE LA MATRIZ QUE
      TENEMOS DEFINIDA

    */

    coeficiente[celda++] = divisor  = a[fila][fila];

      for (int columna = 0; columna < N; columna++)
        /*
          POR LO TANTO AL PROSEGUIR CON EL PROGRAMA
          TENEMOS QUE HAY QUE DIVIDIR LA FILA

          POR ESO A[FILA][COLUMNA], SE DIVIDE POR EL
          VALOR DE K, DE ESE MODO, REDUCIRÍAMOS EL
          TAMAÑO DE LA PRIMERA FILA
        */

	      a[fila][columna] /= divisor;

          for (int filinf = fila+1; filinf < N; filinf++){
            /*
              TRAS TODOS LOS PASOS, EL VALOR DEL DIVISOR
              SE CONVERTIRÁ EN EL NÚMERO QUE SE ENCUENTRE
              EN LA POSICIÓN A[FILINF][FILA]

              Y ESOS VALORES IRÁN INCREMENTANDO A MEDIDA
              QUE SE VAYA PRODUCIENDO EL BUCLE
            */

            divisor = a[filinf][fila];

          for (int columna = 0; columna < N; columna++)
            /*
              PARA HACER LA TRIANGULACIÓN Y QUE APAREZCAN
              LOS 0 EN LAS ECUACIONES, RESTAMOS
              A[FILINF][COLUMNA] POR A[FILA][COLUMNA]*DIVISOR
            */

            a[filinf][columna] -= (a[fila][columna] * divisor);

        }

        impresion(a);
    }

    for (int i = 0; i < N; i++)
      determinante *= coeficiente[i];

    printf("El valor del determinante es %.2f\n", determinante);

  return EXIT_SUCCESS;
}
