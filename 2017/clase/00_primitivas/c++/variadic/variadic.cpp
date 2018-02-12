//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//EN ESTE PROGRAMA TENDRÁS QUE INTRODUCIR UN NÚMERO, Y EL PROPIO PROGRAMA TE REALIZARÁ UNA SUMA
//HAY UNA VERSIÓN MÁS COMPLETA QUE PODRÁS ENCONTAR EN OTRO DE MIS REPOSITORIOS, AQUÍ OS DEJO EL ENLACE
//PASCALINA: https://github.com/Jeluchu/Pascalina.git

#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1 = 7;
    int op2;

    printf("Introducir el operando 2: ");
    scanf(" %i", &op2);

    printf("%i + %i = %i\n", op1, op2, op1 + op2 );

    return EXIT_SUCCESS;

}
