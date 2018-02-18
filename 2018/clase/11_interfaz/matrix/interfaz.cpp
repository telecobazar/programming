#include <stdio.h>
#include <stdlib.h>

#include "comun.h"
#include "interfaz.h"
void header(){
    system("clear");
    system("toilet -fpagga 'MATRIX'");
}

void ver(int a[M][N]){
    printf("\n\n");
    printf(AZUL);
    for (int f=0; f<M; f++){
        for (int c=0; c<N; c++)
            printf("%4i", a[f][c]);
        printf("\n");
    }
    printf(NORMAL);
        printf("\n\n");
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━\n");

}



void valor(int *donde){
    printf(NEGRITA "Introduce el valor: " NORMAL);
    scanf(" %i", donde);
    printf("\n\n");
}


void matrix() {
  printf(NEGRITA "Usted a creado una 'Matriz' de 4x3\n" NORMAL);
}
