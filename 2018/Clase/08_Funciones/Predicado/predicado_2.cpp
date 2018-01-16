#include <stdio.h>
#include <stdlib.h>

int es_par(int num){
  if (num %2)
    return false;
  return true;
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
