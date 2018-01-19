#include <stdio.h>
#include <stdlib.h>

int main() {

  int n;

  printf("Introduce el número deseado: ");
  scanf("%i", &n);

  printf("\n\n");

  for (int f = 0; f < n; f++) {
      for (int c = 0; c < f+1; c++)
          printf("* ");
      printf("\n");
  }
  printf("\n\n");
  
  return EXIT_SUCCESS;
}
