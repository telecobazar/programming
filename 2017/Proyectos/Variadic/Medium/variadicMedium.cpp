//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//HAY UNA VERSIÓN MÁS COMPLETA QUE PODRÁS ENCONTAR EN OTRO DE MIS REPOSITORIOS, AQUÍ OS DEJO EL ENLACE
//PASCALINA: https://github.com/Jeluchu/Pascalina.git

#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1;
    int op2;

    printf("Este programa está diseñado para realizar una suma, a continuación se pedirán 2 números que el propio usuario desee, y después se mostrará el resultado en pantalla\n");

    printf("Introducir el primer número deseado: ");
    scanf(" %i", &op1);

    printf("Introducir el segundo número deseado: ");
    scanf(" %i", &op2);

    printf("El resultado final es: ");
    printf("%i\n", op1 + op2 );

    return EXIT_SUCCESS;

 }
