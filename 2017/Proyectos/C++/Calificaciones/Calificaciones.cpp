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

int main(){

    float calificacion;

    printf("\n");
    system("toilet -fpagga CALIFICACIONES\n");
    printf("\n");

    printf("Introduce una puntuación: ");
    scanf(" %f", &calificacion);


    if(calificacion>10 | calificacion<0 )
    { printf("Por favor, introduce una calificación entre 0 y 10\n");    }
    else if(calificacion==10)
    {
        printf(AZULETE "¡ENHORABUENA!, HAS OBTENIDO UNA MATRÍCULA DE HONOR\n" NORMAL);
    }
    else if(calificacion>9)
    {
        printf(VERDE "ESTAS RONDANDO LA EXCELENCIA, ¡ENHORABUENA!\n" NORMAL);
    }
    else if(calificacion>5)
    {
        printf(NEGRITA "Tu calificación es %.f, estas" VERDE" APROBADO\n" NORMAL, calificacion);
    }
    else if( (float)calificacion>4.5 )
    {
        printf(NEGRITA "Tu calificación es %.f, estas" AMARILLO " APROBADO\n" NORMAL, calificacion);
    }
    else  if(calificacion==0)
    {
        printf(NEGRITA "Tu calificación es %.f, estas" ROJO" ¡DEBES ESTUDIAR MÁS!\n" NORMAL, calificacion);
    }
    else
    {
        printf(NEGRITA "Tu calificación es %.f, estas" ROJO" SUSPENSO\n" NORMAL, calificacion);
    }

    return EXIT_SUCCESS;

}
