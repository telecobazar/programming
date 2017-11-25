//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//ESTE PROGRAMA ES UNA PRÁCTICA ACERCA DE LAS VARIABLES Y EL USO DE 'CHAR', ESPERO QUE OS SIRVA DE UTILIDAD

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"

int main(){

    char nombre[16];
    char apellidos [20];
    int opcion;

    printf(AMARILLO "¿Cómo te llamas?\n" NORMAL);
    printf("------------------------------------------------------------------------------\n");
    sleep(1);
    printf(AZUL "Introduce tu nombre: " NORMAL);
    scanf(" %[^\n]", nombre);
    printf("------------------------------------------------------------------------------\n");
    printf(AMARILLO "Hola %s, ¿Me podrías decir cuáles son tus apellidos?\n" NORMAL, nombre);
    printf("------------------------------------------------------------------------------\n");
    sleep(1);
    printf(AZUL "Introduce tus apellidos: " NORMAL);
    scanf(" %[^\n]", apellidos);
    printf("------------------------------------------------------------------------------\n");
    printf(AMARILLO "Encantado, %s %s, ¿Qué tal te encuentras?\n" NORMAL, nombre, apellidos);
    sleep(1);
    printf("------------------------------------------------------------------------------\n");
    printf(VERDE "\t Escoge una opción\n" NORMAL
           "\t '1' si te encuentras bien\n"
           "\t '2' si te encuentras mal\n");
    printf("------------------------------------------------------------------------------\n");
    printf(AZUL "Introduce tu opción: " NORMAL);
    scanf("%i", &opcion);
    switch(opcion){
      case 1:
        printf(AMARILLO "Me alegro de que estés bien\n" NORMAL);
        return EXIT_SUCCESS;
      break;
      case 2:
        printf(AMARILLO "Espero que mejore el día\n" NORMAL);
        return EXIT_SUCCESS;
      break;

      default: printf(ROJO "Escoge una opción correcta\n" NORMAL);
    }

}

