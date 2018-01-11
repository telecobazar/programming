//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"

//http://cloford.com/resources/charcodes/index.htm
//https://www.utf8icons.com/subsets/geometric-shapes

int main(){ 

  int Opcion;

    printf(
         VERDE "\t¿Qué operación deseas realizar?\n" NORMAL
       NEGRITA "\t  Pulsa 1 " NORMAL "Triángulo\n"
       NEGRITA "\t  Pulsa 2 " NORMAL "Cuadrado\n"
       NEGRITA "\t  Pulsa 3 " NORMAL "Paralelogramo\n"
       NEGRITA "\t  Pulsa 4 " NORMAL "Pentágono\n"
       NEGRITA "\t  Pulsa 5 " NORMAL "Círculo\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(AZUL "Escoge la opción deseada: " NORMAL);
        scanf("%i", &Opcion);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    switch(Opcion) {
    case 1:
	printf("▲\n\n");
    break;
    case 2:
	printf("■\n\n");
    break;
    case 3:
	printf("▰\n\n");
    break;
    case 4:
	printf("⬟\n\n");
    break;
    case 5:
	printf("●\n\n");
    break;

   default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
  }
}
