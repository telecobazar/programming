//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

/*

TABLAS DE COLORES
------------------------------
Combinación	Color
========================
0;30		Negro
0;31		Rojo
0;32            Verde
0;33		Marrón
0;34		Azul
0;35		Púrpura
0;36		Cian
0;37		Gris claro
1;30		Gris oscuro
1;31		Rojo claro
1;32		Verde claro
1;33		Amarillo
1;34		Azul claro
1;35		Púrpura claro
1;36		Cian claro
1;37		Blanco

Colores de fondo (background)
------------------------------

Combinación	Color
========================
40		Negro
41		Rojo
42		Verde
43		Marrón
44		Azul
45		Púrpura
46		Turquesa
47		Gris

Efectos de carácter
-------------------------------

Combinación	Estilo
========================
0;4		Subrayado
0;1		Negrita
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define MORADO "\x1B[1;35m"
#define NEGRO "\x1B[1;30m"
#define BLANCO "\x1B[1;97m"
#define AMARILLO "\x1B[1;33m"
#define CYAN "\x1B[1;36m"
#define MARRON "\x1B[0;33m"

int main(){

    //      R        G          B
    float colorin1, colorin2, colorin3;
    int opcion;
    time_t tiempo = time(0);
    struct tm *tlocal = localtime(&tiempo);

    char output[128];
    strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);

     printf("\n");
     system("toilet --gay -fpagga COLORINES\n\n");
     printf("\n");
     sleep(2);
     printf(AMARILLO "|    Te damos la bienvenida ");
     printf("%s", getenv("USER"));
     printf("\n" NORMAL);
     sleep(1);
     printf(
      VERDE "|    COLORINES v1.0 ~ Versión 'ESTABLE'\n" NORMAL
       CYAN "|    Iniciado el %s\n" NORMAL,output);
     printf("+---------------------------------------------------------------------+\n");
     printf(
    NEGRITA "|    COLORINES, Tu tabla cromática\n"
            "|    Dando valores entre 0 y 1 te dirá que color es en RGB\n" NORMAL);
     printf("+---------------------------------------------------------------------+\n");
     sleep(5);


do{
     system("clear");
     system("toilet -fpagga COLORINES\n\n");
     system("toilet --gay -fpagga TABLA CROMÁTICA RGB\n\n");
     printf("\n");
     printf(
    NEGRITA "|    Pulsa 1 " NORMAL "para ejecutar\n"
    NEGRITA "|    Pulsa 0 " NORMAL "para salir\n");
     printf("+---------------------------------------------------------------------+\n");
     printf(NEGRITA "|    Escoge la opción que deseas: " NORMAL);
     scanf(" %i", &opcion);
     printf("+---------------------------------------------------------------------+\n");

     switch(opcion){
     case 0:
	   printf(NEGRITA "Esperamos que te haya sido de utilidad\n"
                  "¡HASTA PRONTO!\n\n" NORMAL);
           sleep(2);
           system("toilet --gay -fpagga JÉLUCHU\n\n");
           printf("\n");
	   return EXIT_SUCCESS;
     break;
     case 1:
     printf(NEGRITA "|    Introduce el primer número de 'R': " NORMAL);
     scanf(" %f", &colorin1);
     printf(NEGRITA "|    Introduce el segundo número de 'G': " NORMAL);
     scanf(" %f", &colorin2);
     printf(NEGRITA "|    Introduce el tercer número 'B': " NORMAL);
     scanf(" %f", &colorin3);

     printf("\n");

     if((colorin1 == 1) && (colorin2 == 0) && (colorin3 == 0)){
          printf("|    Este color será " ROJO "ROJO\n\n" NORMAL);

     }else
      if((colorin1 == 0) && (colorin2 == 1) && (colorin3 == 0)){
          printf("|    Este color será " VERDE "VERDE\n\n" NORMAL);

     }else
       if((colorin1 == 0) && (colorin2 == 0) && (colorin3 == 1)){
          printf("|    Este color será " AZUL "AZUL\n\n" NORMAL);

     }else
       if((colorin1 == 1) && (colorin2 == 1) && (colorin3 == 0)){
          printf("|    Este color será " AMARILLO "AMARILLO\n\n" NORMAL);

     }else
       if((colorin1 == (float)0.4) && (colorin2 == 0) && (colorin3 == (float)0.8)){
          printf("|    Este color será " MORADO "MORADO\n\n" NORMAL);
     }else
       if((colorin1 == (float)0.8) && (colorin2 == 1) && (colorin3 == (float)1)){
          printf("|    Este color será " CYAN "CYAN\n\n" NORMAL);

     }else
       if((colorin1 == (float)0.7) && (colorin2 == (float)0.5) && (colorin3 == 0)){
          printf("|    Este color será " MARRON "MARRÓN CLARO\n\n" NORMAL);

     }else
       if((colorin1 == 0) && (colorin2 == 0) && (colorin3 == 0)){
          printf("|    Este color será " NEGRO "NEGRO\n\n" NORMAL);

     }else
        if((colorin1 == 1) && (colorin2 == 1) && (colorin3 == 1)){
          printf("|    Este color será " BLANCO "BLANCO\n\n" NORMAL);}

     break;

     default: printf(ROJO "Por favor seleccione una opción correcta\n" NORMAL);
     }
 sleep(5);
}while(opcion!=0);

}
