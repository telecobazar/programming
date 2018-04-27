#include <stdio.h>
#include <stdlib.h>

#define N 6
#define PLANTILLA 2

typedef struct {
  int id;
  int saldo;
  double sueldo;
  char name[N];
} Empleado;

void rellena(Empleado *nuevo){

  printf("Nombre: ");
  scanf(" %s", nuevo->name);

  printf("Saldo: ");
  scanf(" %i", nuevo->saldo);

}

void imprime(Empleado persona) {

  printf("Nombre : %s\n"
         "Saldo: %s\n\n", persona.name, persona.saldo);
  /* code */
}

int main() {

  Empleado persona[PLANTILLA];

  for (int i = 0; i < PLANTILLA; i++)
    rellena(&persona[i]);

  for (int i = 0; i < PLANTILLA; i++)
    imprime(persona[i]);

  printf("\n");

  return EXIT_SUCCESS;
}
