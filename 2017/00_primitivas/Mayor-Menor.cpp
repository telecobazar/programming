#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m]"
#define AMARILLO "\x1B[1;33m"

int main() {
    int op1;
    int op2;
    int opcion;

    printf("\n");
    system("toilet --gay -fpagga MAYOR O MENOR");
    printf("\n");

    printf("A continuación, introduce dos números para saber\n");
    printf("cuál de los dos es mayor\n");
    printf("\n");
    printf("¿Qué deseas realizar?\n");
    printf("Pulsa 1 para lanzar el programa\n");
    printf("Pulsa 0 para salir\n");
    printf("Introduce la opción deseada: ");

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
        printf(AMARILLO "El número mayor es: ");
        printf("%i\n", NORMAL, op1);
       }
      else
      if(op2>op1){
        printf(AMARILLO "El número mayor es: ");
        printf("%i\n", NORMAL, op2);
       }
      break;

 default: printf(ROJO "Escoge la opción correcta\n\n" NORMAL);
    }
   printf(AZUL "Para realizar otra operación, marque una opción: " NORMAL);
}while(opcion!=0);
}
