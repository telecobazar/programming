#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int id;
  char name[N];
  double salario;
  char puesto [N];
  char cutero;
} Empleado;

void rellena(Empleado *nuevo) {
  printf("Nombre: ");
  scanf(" %s", nuevo->nombre);
  printf("Puesto: ");
  scanf(" %s", nuevo->nombre);
  printf("Salario: ");
  scanf(" %lf", nuevo->salario);
}

int main() {

  Empleado *primer = NULL;

  primer = (Empleado *) malloc(sizeof(Empleado));
  rellena(primer);

  free(primer);

  return EXIT_SUCCESS;
}
