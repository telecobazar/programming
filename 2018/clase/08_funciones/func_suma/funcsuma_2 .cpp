//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//Ejercicio de funciones

#include <stdio.h>
#include <stdlib.h>


double suma(double op1, double op2){return op1 + op2;}

int main(){

    double op1, op2, resultado;

    system("toilet -fpagga FUNCION SUMA");

    resultado = suma(2,3);

    printf("%.2lf+%.2lf=%.2lf\n", op1, op2, resultado);

    return EXIT_SUCCESS;
}
