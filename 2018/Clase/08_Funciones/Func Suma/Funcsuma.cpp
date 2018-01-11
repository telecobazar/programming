//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
////Ejercicio de funciones

#include <stdio.h>
#include <stdlib.h>


double suma(double op1, double op2){return op1 + op2;}

int main(){

    double op1, op2, resultado;

    system("toilet -fpagga FUNCION SUMA");

    printf("\n""Introduce el primer número: ");
    scanf("%lf", &op1);

    printf("Introduce el segundo número: ");
    scanf("%lf", &op2);

    printf("\n");
    resultado = suma(op1, op2);

    printf("La suma entre %.2f y %.2f es %.2f\n", op1, op2,  resultado);

    return EXIT_SUCCESS;
}
