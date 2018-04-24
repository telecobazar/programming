#include <stdio.h>
#include <stdlib.h>

#define N 6

typedef struct {
  int id;
  int saldo;
  double sueldo;
  char name[N];
} Empleado;

int main() {

  Empleado jefe = { 27, -13, 23.5, "Ramon"};
  void *p = (void *) &jefe;

  printf("Jefe reside en %p\n", p);
  for (int i = 0; i < sizeof(jefe); i++) //sizeof(jefe) --> EL TAMAÑO DE LA VARIABLE EN BITES
    printf(" %X", *((char *)p+i)); // p = nada --> (int *)p = LA DIRECCIÓN DE UN ENTERO -->  (char *)p = LA DIRECCIÓN DE UN BITE

  printf("\n");

  return EXIT_SUCCESS;
}
