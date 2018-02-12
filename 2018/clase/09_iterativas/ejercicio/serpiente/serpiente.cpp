#include <stdio.h>
#include <stdlib.h>

#define N 3

int f, c;


int main(){

    for (int f = 0; f < N; f++) {
      for (int t = 0; t < N; t++)
        for (int c = t?1:0; c < N; c++)
          if (f == c)
            printf("* ");
          else
            printf("  ");
      printf("\n");
    }
  return EXIT_SUCCESS;
}
