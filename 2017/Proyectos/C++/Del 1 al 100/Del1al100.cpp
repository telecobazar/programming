#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"

int main(){
    int i, opcion, tope, a=0;

    printf("\n");
    system("toilet --gay -fpagga DEL 1 AL 100\n\n");
    printf("\n");
    sleep(1);
    printf("Este programa obtiene un número, y muestra una lista dede el 1 al tope marcado\n"
           "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    sleep(2);

do{
    system("clear");
    system("toilet -fpagga DEL 1 AL 100\n\n");
    printf("\n");
    printf(VERDE "\t¿Qué operación deseas realizar?\n" NORMAL);
    printf(NEGRITA "\t  Pulsa 1 " NORMAL "si deseas ejecutar el programa\n"
           NEGRITA "\t  Pulsa 0 " NORMAL "si deseas salir del programa\n\n"
           "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf(AZUL "Introduce la opción que deseas: " NORMAL);
    scanf(" %i", &opcion);
    switch (opcion) {
    case 1:
        printf("Introduce el tope que desees: ");
        scanf(" %i", &tope);
        for(i=0; i<=tope; i++){

            printf(" %i\n",i);
        }
    break;
    case 0:
            return EXIT_SUCCESS;
    default: printf(ROJO "Por favor seleccione una opción correcta\n\n" NORMAL);
    break;
    }
        sleep(10);
}while(opcion!=0);
}
