#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define MAGENTA "\x1B[1;35m"

int main(){
    double buffer;
    double *vec = NULL;
    static int dim = 0;
    char end;

    system("clear");
    system("toilet -fpagga Vectorizate!");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf(ROJO "Ejemplo de vector (1 2 3), ¡Admite decimales!\n" NORMAL
          "━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n"
           NEGRITA "Introduce tu vector: " NORMAL);
    scanf(" %*[()]");
    do{
        vec = (double *) realloc(vec, (dim+1) * sizeof(double));
        scanf(" %lf", &buffer);
        vec[dim++] = buffer;
    }while (!scanf(" %1[)]", &end));

    printf(MAGENTA "\nTú vector es el siguiente " NORMAL NEGRITA"(");
    for (int componente=0; componente<dim; componente++)
        printf("%6.2lf", vec[componente]);
    printf("  )\n\n" NORMAL);

    free(vec);
    return EXIT_SUCCESS;
}
