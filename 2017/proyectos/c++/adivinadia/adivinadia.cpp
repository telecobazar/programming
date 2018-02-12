//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>

#define AZUL "\x1B[1;34m"
#define NORMAL "\x1B[0m"
#define NEGRITA "\x1B[1m"
#define ROJO "\x1B[1;31m"

int main(){
   int i;

   printf("\n");
   system("toilet -fpagga ADIVINA TU DÍA\n\n");
   printf("\n");
   printf(AZUL "Introduzca número del 1 al 7: " NORMAL);
   scanf("%d",&i);

   switch(i){
             case 1:
                  printf (NEGRITA "El primer día de la semana es Lunes\n" NORMAL
                          "-------------------------------------------\n");
                  break;
             case 2:
                  printf (NEGRITA "El segundo día de la semana es Martes\n"
                          "-------------------------------------------\n" NORMAL);
                  break;
             case 3:
                  printf (NEGRITA "El tercer día de la semana es Miércoles\n" NORMAL
                          "-------------------------------------------\n");
                  break;
             case 4:
                  printf (NEGRITA "El cuarto día de la semana es Jueves\n" NORMAL
                          "-------------------------------------------\n");
                  break;
             case 5:
                  printf (NEGRITA "El quinto día de la semana es Viernes\n" NORMAL
                          "-------------------------------------------\n");
                  break;
             case 6:
                  printf (NEGRITA "El sexto día de la semana es Sábado\n" NORMAL
                          "-------------------------------------------\n");
                  break;
             case 7:
                  printf (NEGRITA "El séptimo día de la semana es Domingo\n" NORMAL
                          "-------------------------------------------\n");
                  break;
             default:
                  printf (ROJO "No hay más de 7 días en la semana\n" NORMAL
                          "-------------------------------------------\n");
                  break;

   }
   return EXIT_SUCCESS;
}
