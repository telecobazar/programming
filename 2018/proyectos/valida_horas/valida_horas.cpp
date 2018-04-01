#include <stdlib.h>
#include <stdio.h>

int main(){

    int h, m, s;

    printf("Introduzca horas: ");
    scanf("%d", &h);

    printf("Introduzca minutos: ");
    scanf("%d", &m);

    printf("Introduzca segundos: ");
    scanf("%d", &s);

    if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
        printf("Esta hora es correcta");
    else
        printf("Esta hora es incorrecta");

    return EXIT_SUCCESS;
}
