//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu
//HAY UNA VERSIÓN MÁS COMPLETA QUE PODRÁS ENCONTAR EN OTRO DE MIS REPOSITORIOS, AQUÍ OS DEJO EL ENLACE
//PASCALINA: https://github.com/Jeluchu/Pascalina.git

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  float A,B,C,D,S,Resultado1,Resultado2;

  printf("Ecuacion de segundo grado\n");
  printf("Introduce el valor de 'A': ");
  scanf("%f",&A);

  printf("Introduce el valor de 'B': ");
  scanf("%f",&B);

  printf("Introduce el valor de 'C': ");
  scanf("%f",&C);

  D=B*B-4*A*C;

  if(D<0){
    printf("No tiene una solución real\n\n"); }
  else 
  if(D==0){
    S=-B/2*A;
    printf("El resultado de la ecuacion es %.2f\n",S); }
  else {
    Resultado1=(-B+sqrt(D))/(2*A);
    Resultado2=(-B-sqrt(D))/(2*A);
    printf("Los resultados de la ecuacion son %.2f y %.2f\n",Resultado1,Resultado2);
	}
}

 

 
