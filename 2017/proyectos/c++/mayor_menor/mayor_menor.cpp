//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//EN ESTE PROGRAMA TENDRÁS QUE INTRODUCIR DOS NÚMEROS, Y EL PROPIO PROGRAMA TE DIRÁ CUÁL ES MAYOR Y CUÁL ES EL MENOR

#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"
#define VERDE "\x1B[1;32m"

int main() {
    int op1, op2, opcion;

    printf("\n");
    system("toilet --gay -fpagga MAYOR O MENOR");
    printf("\n");

    printf("A continuación, introduce dos números para saber\n");
    printf("cuál de los dos es mayor\n");
    printf("\n");
    printf(VERDE "\t ¿Qué deseas realizar?\n" NORMAL
    NEGRITA "\t Pulsa 1 " NORMAL "para lanzar el programa\n"
    NEGRITA "\t Pulsa 0 " NORMAL "para salir\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf(NEGRITA "Introduce la opción deseada: " NORMAL);
do{
    scanf("%i", &opcion);
    switch(opcion) {
    case 0:
        return EXIT_SUCCESS;
    break;
    case 1:
      printf(AZUL "Introduce el primer número: " NORMAL);
      scanf("%i", &op1);
      printf(AZUL "Introduce el segundo número: " NORMAL);
      scanf("%i", &op2);

      if(op1>op2){
      printf(AZULETE "El número mayor es: ");
      printf("%i\n" NORMAL, op1);
      }
      else
      {
      printf(AZULETE "El número mayor es: ");
      printf("%i\n" NORMAL, op2);
      }
      break;

 default: printf(ROJO "Escoge la opción correcta\n\n" NORMAL);
    }
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf(NEGRITA "Para realizar otra operación, marque una opción: " NORMAL);
}while(opcion!=0);
}
