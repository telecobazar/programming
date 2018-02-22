#include <stdio.h>
#include <stdlib.h>

int main(){

    char palindromo[] = "dabale arroz a la zorra el abad"; //EL PREPROCESADOR CUENTA LOS CARACTERES
    char *letra = palindromo; //IRÍA A LA PRIMERA DIRECCIÓN DE PALINDROMO, SERÍA COMO SI PUSIÉRAMOS: &palindromo[0];

    while( *letra != '\0' ){
      // printf(" %s\n", letra); IMPRIME TODA LA CADENA DE CARACTERES
      printf(" %c", *letra); //IMPRIME SOLO LA LETRA DE LA CELDA INICIAL
      letra++;
    }

    printf("\n");

    return EXIT_SUCCESS;
}
