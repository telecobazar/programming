//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>

int es_par(int num){
  return !(num %2);
}

int main(void) {

  int num;

  printf("Introduce un número: ");
  scanf("%d", &num);

  if (es_par(num)){
    printf("Es par\n");
  }else{
    printf("Es impar\n");
  }

  return EXIT_SUCCESS;
}
