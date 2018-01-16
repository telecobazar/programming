//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//Ejercicio de funciones

#include <stdio.h>
#include <stdlib.h>


int menu(int Opcion1) {
    printf(
   "\t  Pulsa 1 "  "si deseas operaciones básicas\n"
   "\t  Pulsa 2 "  "si deseas realizar una Raíz\n"
   "\t  Pulsa 3 "  "si deseas realizar porcentajes\n"
   "\t  Pulsa 4 "  "si deseas realizar potencias\n");
  printf("\t  Escoge una opción: ");
  scanf("%i", &Opcion1);

  switch(Opcion1){
  case 1:
    printf("HOLA\n");
  break;

  case 2:
    printf("ADIÓS\n");
  break;

  case 3:
    printf("ORDENADOR\n");
  break;

  case 4:
    printf("MÓVIL\n");	
  break;

  default: printf("\t  Por favor seleccione una opción correcta\n\n");
  }
}

int main(){

    int resultado;

    resultado = menu(8);
    printf("%i\n", resultado);
 
    return EXIT_SUCCESS;
}
