//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define AZUL "\x1B[1;34m"
#define NORMAL "\x1B[0m"
#define NEGRITA "\x1B[1m"
#define ROJO "\x1B[1;31m"
#define VERDE "\x1B[1;32m"
#define AMARILLO "\x1B[1;33m"
#define AZULETE "\x1B[1;36m"


int main(){

    int lado, base, opcion;
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];
    strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);
    printf("\n");
    system("toilet -fpagga ZODIACO FUTURISTA\n\n");
    printf("\n");
    sleep(2);
    printf(AMARILLO "Te damos la bienvenida ");
    printf(getenv("USER"));
    printf("\n" NORMAL);
    printf(VERDE "ZODIACO FUTURISTA 'Versión Inicial'\n" NORMAL);
    printf(AZULETE "Iniciada el %s\n" NORMAL,output);


    printf("-------------------------------------------\n");
    sleep(2);

    printf(VERDE "\t¿Entre que fecha has nacido?\n" NORMAL
                 "\t Pulsa 1 Si has nacido entre el 20 de Enero y el 18 de Febrero\n"
                 "\t Pulsa 2 Si has nacido entre el 19 de Febrero y el 20 de Marzo\n"
                 "\t Pulsa 3 Si has nacido entre el 21 de Marzo y el 19 de Abril\n"
                 "\t Pulsa 4 Si has nacido entre el 20 de Abril y el 20 de Mayo\n"
                 "\t Pulsa 5 Si has nacido entre el 21 de Mayo y el 20 de Junio\n"
                 "\t Pulsa 6 Si has nacido entre el 21 de Junio y el 22 de Julio\n"
                 "\t Pulsa 7 Si has nacido entre el 23 de Julio y el 22 de Agosto\n"
                 "\t Pulsa 8 Si has nacido entre el 23 de Agosto y el 22 de Septiembre\n"
                 "\t Pulsa 9 Si has nacido entre el 23 de Septiembre y el 22 de Octubre\n"
                 "\t Pulsa 10 Si has nacido entre el 23 de Octubre y el 21 de Noviembre\n"
                 "\t Pulsa 11 Si has nacido entre el 22 de Noviembre y el 21 de Diciembre\n"
                 "\t Pulsa 12 Si has nacido entre el 22 de Diciembre y el 19 de Enero\n"
                 "-------------------------------------------\n");
    printf(AZUL "Introduce tu opción: " NORMAL);
    scanf("%d",&opcion);
    printf("-------------------------------------------\n");
    switch (opcion){
      case 1:
        printf(NEGRITA " ♒  'ACUARIO' (El Portador del Agua)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 2:
        printf(NEGRITA " ♓  'PISCIS' (Los Peces)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 3:
        printf(NEGRITA " ♈  'ARIES' (El Carnero)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 4:
        printf(NEGRITA " ♉  'TAURO' (El Toro)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 5:
        printf(NEGRITA " ♊  'GÉMINIS' (Los Gemelos)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 6:
        printf(NEGRITA " ♋' 'CÁNCER' (El Cangrejo)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 7:
        printf(NEGRITA " ♌  'LEO' (El León)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 8:
        printf(NEGRITA " ♍  'VIRGO' (La Virgen)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 9:
        printf(NEGRITA " ♎  'LIBRA' (La Balanza)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 10:
        printf(NEGRITA " ♏  'ESCORPIO' (El Escorpión)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 11:
        printf(NEGRITA " ♐  'SAGITARIO' (El Arquero Centauro)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;
      case 12:
        printf(NEGRITA " ♑ 'CAPRICORNIO' (La Cabra con Cuernos, La Cabra de mar)\n" NORMAL);
        printf("-------------------------------------------\n");
      break;

      default: printf(ROJO "Escoge una opción correcta\n" NORMAL);
               printf("-------------------------------------------\n");

      break;
}
return EXIT_SUCCESS;
}
