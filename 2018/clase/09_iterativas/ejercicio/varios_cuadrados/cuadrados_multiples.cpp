//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdio_ext.h>

#define N 3
#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"

int leerNumero()              //FUNCIÓN DE ERRORES DE OPCIÓN
{
   int numero = -1;
   __fpurge(stdin);
   scanf("%i", &numero );
   return numero;
}

void dibu_1(int i, int a) {               //FUNCIÓN PARA DIBUJAR CUADRADOS EXTERIORES
  if (i<=a-1 || (i>=a*2 && i<=a*3-1)) {
      printf(AMARILLO " *" NORMAL);
  } else {
      printf("  ");
  }
}

void dibu_2(int i, int a) {               //FUNCIÓN PARA DIBUJAR CUADRADO INTERIOR

  if (i>=a && i<=a*2-1){
    printf(NEGRITA " *" NORMAL);
  }else {
   printf("  ");
  }
}

int main() {                              //FUNCIÓN PRINCIPAL DEL PROGRAMA

  int a=0;
  int fila, columna, Opcion;

  printf("\n");
  time_t tiempo = time(0);
  struct tm *tlocal = localtime(&tiempo);

  char output[128];
  strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);

  printf("\n");
  system("toilet --gay -fpagga CUADRINK");
  printf("\n");

  sleep(1);
  printf(AMARILLO "|     Te damos la bienvenida ");
  printf("%s", getenv("USER"));
  printf("\n" NORMAL);
  sleep(1);
  printf(VERDE "|     CUADRINK v.FINAL ~ Versión 'ESTABLE'\n" NORMAL);
  sleep(1);
  printf(AZULETE "|     Iniciada el %s\n" NORMAL,output);
  printf("+---------------------------------------------------------------------+\n");
  sleep(1);
  printf(
  NEGRITA "|     CUADRINK, cuadrados sin fin\n"
         "|     Te pedirá un número con el cuál te dibujará cuadrados sin fin\n"
         "|     es un programa realizado en base a aprender el uso de los\n"
         "|     'for' y las 'funciones'.\n" NORMAL);
  printf("+---------------------------------------------------------------------+\n\n");
  sleep(2);
  printf("|     Pulsa" VERDE " 'ENTER' " NORMAL "para para comenzar");

  while(getchar()!='\n');

do {
  system("clear");
  system("toilet -fpagga CUADRINK");
  printf(
  "+---------------------------------------------------------------------+\n"
  "|"      VERDE "\t\t¿Qué operación deseas realizar?" NORMAL     "\t\t\t      |\n"
  "+---------------------------------------------------------------------+\n"
  "|" NEGRITA "\t  Pulsa 1 " NORMAL "si quieres ejecutar el programa" "\t\t      |\n"
  "|" NEGRITA "\t  Pulsa 0 " NORMAL "para salir" "\t\t\t\t\t      |\n"
  "+---------------------------------------------------------------------+\n");
  printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
  Opcion = leerNumero();
  printf("+---------------------------------------------------------------------+\n");
  switch (Opcion) {
    case 0:
    printf("\n");
    printf(NEGRITA "|     Te agradecemos que hayas usado 'Pascalina'\n" NORMAL
           NEGRITA "|     muchísimas gracias " VERDE);
    printf("%s",getenv("USER"));
    printf("\n" NORMAL);
    sleep(2);
    printf("\n");
    printf(NEGRITA "|     Esperamos que te haya sido de utilidad\n"
           "|     ¡HASTA PRONTO!\n\n" NORMAL);
    sleep(2);
    system("toilet --gay -fpagga JÉLUCHU\n\n");
    printf("\n");
    return EXIT_SUCCESS;
    break;
    case 1:
    printf("\t  Introduce el lado del cuadrado: ");
    scanf("%i", &a);
    printf("\n\n");
      for (fila = 1; fila <= a*N; fila++) {
        if(fila<=a || fila>a*2){
          for (int i = 0; i <= a*N; i++) {
              dibu_1(i,a);
          }
              printf(" \n");
          }else{
            for (int i= 0; i <= a*N; i++) {
            dibu_2(i, a);
          }
            printf("\n");
          }
      }
    break;
    default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
    }
    printf("\n\n");
    printf("+---------------------------------------------------------------------+\n");
    printf("\n");
    printf("|\t  Pulsa" VERDE " 'ENTER' " NORMAL "para volver al menú principal");
    while(getchar()!='\n');
    getchar();
  } while(Opcion!=0);
}
