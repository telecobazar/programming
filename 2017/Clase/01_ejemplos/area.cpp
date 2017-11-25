//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//HAY UNA VERSIÓN MÁS COMPLETA QUE PODRÁS ENCONTAR EN OTRO DE MIS REPOSITORIOS, AQUÍ OS DEJO EL ENLACE
//PASCALINA: https://github.com/Jeluchu/Pascalina.git

#include <stdio.h>
#include <stdlib.h>

int main(){

    int lado, area, perimetro;

    system("toilet --gay -fpagga CUADRADO");

    /* Entrada de datos */
    printf("Lado: ");
    scanf(" %i", &lado);

    /* Calculo de datos */
    area = lado*lado;
    perimetro = 4*lado;

    /* Salida de datos */
    printf("Área: %i\n"
           "Perímetro: %i\n",
           area, perimetro);

    return EXIT_SUCCESS;
}
