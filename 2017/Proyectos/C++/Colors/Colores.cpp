#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"
#define NEGRO "\x1B[1;30m"
#define BLANCO "\x1B[1;97m"

int main(){

    //      R        G          B
    int colorin1, colorin2, colorin3;

     printf("\n");
     printf(AZULETE "Introduce el primer número: " NORMAL);
     scanf(" %i", &colorin1);
     printf(AZULETE "Introduce el segundo número: " NORMAL);
     scanf(" %i", &colorin2);
     printf(AZULETE "Introduce el tercer número: " NORMAL);
     scanf(" %i", &colorin3);

     printf("\n");

     if((colorin1 == 1) && (colorin2 == 0) && (colorin3 == 0)){
          printf("Este color será " AZUL "AZUL\n\n" NORMAL);

     }else
      if((colorin1 == 0) && (colorin2 == 1) && (colorin3 == 0)){
          printf("Este color será " VERDE "VERDE\n\n" NORMAL);

     }else
       if((colorin1 == 0) && (colorin2 == 0) && (colorin3 == 1)){
          printf("Este color será " ROJO "ROJO\n\n" NORMAL);

     }else
       if((colorin1 == 0) && (colorin2 == 0) && (colorin3 == 0)){
          printf("Este color será " NEGRO "NEGRO\n\n" NORMAL);

     }else
        if((colorin1 == 1) && (colorin2 == 1) && (colorin3 == 1)){
          printf("Este color será " BLANCO "BLANCO\n\n" NORMAL);}

    return EXIT_SUCCESS;
}
