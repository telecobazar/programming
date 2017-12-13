//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//HAY UNA VERSIÓN MÁS COMPLETA QUE PODRÁS ENCONTAR EN OTRO DE MIS REPOSITORIOS, AQUÍ OS DEJO EL ENLACE
//PASCALINA: https://github.com/Jeluchu/Pascalina.git

#include <stdio.h>
#include <stdlib.h>

int main(){

   int numero;

   printf("Introduce el número: ");
   scanf("%i",&numero);

   if (numero%2==0) {
      printf("El número %i es par\n", numero);
   }
   else
   {
      printf("El número %i es impar\n", numero);
   }

   return EXIT_SUCCESS  ;
}
