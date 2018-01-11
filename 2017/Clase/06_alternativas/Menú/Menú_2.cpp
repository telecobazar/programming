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

#define TRI 1
#define CUA 2
#define PAR 3
#define PEN 4
#define CIR 5

//http://cloford.com/resources/charcodes/index.htm
//https://www.utf8icons.com/subsets/geometric-shapes

const char *opcion[] = {
    "Triángulo",
    "Cuadrado",
    "Paralelogramo",
    "Pentágono",
    "Círculo",
    NULL
};

int main(){ 

  unsigned seleccion;

    system("toilet -fpagga MENU FIGURAS");

    printf("\n" "\t¿Cuál es la figura que deseas ver?:\n" "\n");

    for (int i=0; i<5; i++)
        printf("\t%i. %s.\n", i+1, opcion[i]);

    printf("\n" "\tIntroduce la opción que desees: ");
    scanf(" %u", &seleccion);


    switch(seleccion) {
    	case TRI:
	   printf("\t""▲\n\n");
    	break;
    	case CUA:
	   printf("\t""■\n\n");
    	break;
    	case PAR:
	   printf("\t""▰\n\n");
    	break;
    	case PEN:
	   printf("\t""⬟\n\n");
    	break;
    	case CIR:
	   printf("\t""●\n\n");
    	break;

   default: printf(ROJO "\t Por favor seleccione una opción correcta\n\n" NORMAL);
  }
    return EXIT_SUCCESS;
}
