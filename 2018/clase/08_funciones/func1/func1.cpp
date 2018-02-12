//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//Ejercicio inicial de funciones

#include <stdio.h>
#include <stdlib.h>

int suma(int op1, int op2){return op1 + op2;}

int main(){

    int resultado;

    resultado = suma(2,3);
    printf("%i\n", resultado);

    return EXIT_SUCCESS;
}
