#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define N 255

/*

             +-+
 +-----------+0|
 |           +-+
 V
+-+                  +-+-+-+-+-+-+-+-+-+-+-+
|0+----------------->| | | | | | | | | | | |
+-+                  +-+-+-+-+-+-+-+-+-+-+-+
|0+----------------->Hola\0
+-+



*/

int main(){

    char **lista = NULL; //CUIDADO CON LOS  PUNTEROS SALVAJES
    char buffer[N]; // LA DIRECCIÓN DEL PRIMER CARÁCTER DE LA RESERVA - TAMBIÉN SE PUEDE PONER char *buffer;
    int len;

    while(hasta_nueva_orden){
        printf("Dime tu nombre: ");
        fgets(buffer, N, stdin); //RECOGE LO QUE EL USUARIO ESCRIBE
        len = strlen(buffer); //strlen FUNCIÓN QUE DEVUELVE EL VALOR REAL, NO ADMITE '\0', SÍ:  PEPE = 4 - NO:  PEPE\0 = 5
        algun_sitio = (char *) malloc( len * sizeof(char));
        strcpy(algun_sitio, buffer, len - 1);
        algun_sitio[len-1] = '\0';
    }


    return EXIT_SUCCESS;
}
