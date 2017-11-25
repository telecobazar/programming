//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//ESTE PROGRAMA ES UNA BREVE INTRODUCCIÓN A LOS PUNTEROS

#include <stdio.h>
#include <stdlib.h>


#define N 0x100 //256 celdas

int main(){

    /*
        Pequeña lección sobre punteros
        Un puntero es una variable que contiene una dirección de memoria

        Antigua forma de escribirlo (const char *p = "The world is "; Constante tipo cadena)
        char const *p; //Puntero a una constante (dirección de memoria). Forma correcta de decir que el char es const
        char * const p; //Puntero constante (fijo)
        char const * const p; //Puntero fijo a una constante

        En las siguientes variables se puede añadir el espacio y el asterísco:
        int *
        double *
        void *
    */

    const char *p = "The world is ";

    char frase[N] = "a vampire\n"; //Inicialización
    char *d = frase;
  
    d = &frase[2];

    frase[2] == 'v'; //Operador de tipo relacional - Notación de matrices
    *d == 'v';      //Notación de punteros
    *(d+2) == 'm';  //Aritmética de punteros - El 2 está en aritmética de punteros
    *d + 2 == 'x';  //El código Asci de la v es 118, si lo sumo son 120 y se corresponde con la x
    printf(" d ocupa %lu bytes\n", sizeof(d));
	return EXIT_SUCCESS;
}
