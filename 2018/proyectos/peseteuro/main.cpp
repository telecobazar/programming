#include <stdlib.h>
#include <stdio.h>

#define EURO 166.386 //Valor de 1 euro en pesetas

int main(){

    int pesetas;
    float euros;

    printf( "\n   Introduzca la cantidad en pesetas: ");
    scanf( "%d", &pesetas );

    euros = pesetas / EURO;

    printf( "\n   El valor en euros es: %.2f €", euros );

    return EXIT_SUCCESS;
}
