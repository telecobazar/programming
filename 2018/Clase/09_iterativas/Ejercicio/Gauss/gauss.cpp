#include <stdio.h>
#include <stdlib.h>

void piram(int n) {

  for (int f = 0; f < n; f++) {
      for (int c = 0; c < f+1; c++)
          printf("* ");
      printf("\n");
  }
}

int main() {

  int n;

  printf("Introduce el número deseado: ");
  scanf("%i", &n);

  printf("\n\n");

  piram(n);
  
  printf("\n\n");
  return EXIT_SUCCESS;
}
