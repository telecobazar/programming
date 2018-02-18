#include <stdlib.h>
#include <strings.h>

//HAY QUE DECLARAR TODAS LAS FUNCIONES
//EN TODAS LAS LIBRERÍAS PROPIAS
#include "comun.h"
#include "interfaz.h"

int main(){

    int a[M][N];
    bzero(a, sizeof(a)); //PONE TODOS LOS VALORES A 0

    for (int f=0; f<M; f++) //EL VALOR M DECLARADO EN "COMUN.H"
        for (int c=0; c<N; c++){ //EL VALOR N DECLARADO EN "COMUN.H"
            header();
            ver(a);
            valor(&a[f][c]);
        }

    matrix();

    return EXIT_SUCCESS;
}
