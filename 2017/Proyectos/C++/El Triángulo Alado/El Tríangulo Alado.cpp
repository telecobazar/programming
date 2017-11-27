//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//HAY UNA VERSIÓN MÁS COMPLETA QUE PODRÁS ENCONTAR EN OTRO DE MIS REPOSITORIOS, AQUÍ OS DEJO EL ENLACE
//PASCALINA: https://github.com/Jeluchu/Pascalina.git

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define AZUL "\x1B[1;34m"
#define NORMAL "\x1B[0m"
#define NEGRITA "\x1B[1m"
#define ROJO "\x1B[1;31m"
#define VERDE "\x1B[1;32m"

int main(){

    int lado, base, opcion;

    printf("\n");
    system("toilet -fpagga EL TRIÁNGULO ALADO\n\n");
    printf("\n");
    printf(VERDE "EL TRIÁNGULO ALADO 'Versión Inicial'\n" NORMAL);
    printf("-------------------------------------------\n");
    sleep(2);
    printf(AZUL "Introduce el lado del triángulo: " NORMAL);
    scanf("%d",&lado);
    printf(AZUL "Introduce la base del triángulo: " NORMAL);
    scanf("%d",&base);
    printf("-------------------------------------------\n");

    printf(VERDE "¿Qué tipo de triángulo es?\n" NORMAL
                 "Pulsa 1 Si se trata de un triángulo equilátero\n"
                 "Pulsa 2 Si se trata de un triángulo isósceles\n"
                 "Pulsa 3 Si se trata de un triángulo escaleno\n"
                 "-------------------------------------------\n");
    printf(AZUL "Introduce la opción deseada: " NORMAL);
    scanf("%d",&opcion);
    printf("-------------------------------------------\n");
    switch (opcion){
      case 1:
        printf(NEGRITA"El perímetro del triángulo equilátero es: %d\n" NORMAL,3*lado);
      break;
      case 2:
        printf(NEGRITA "El perímetro del triángulo isósceles es: %d\n" NORMAL,(2*lado)+base);
      break;
      case 3:
        printf(NEGRITA "El perímetro del triángulo escaleno es: %d\n" NORMAL,lado+lado+lado);
      break;

      default: printf(ROJO "Escoge una opción correcta\n" NORMAL);

      break;
}
return EXIT_SUCCESS;
}
