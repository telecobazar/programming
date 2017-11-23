
#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"

int main(){
  char nombre[30];
  char apellido1[30];
  char apellido2[50];
  double Opcion;

  printf("\n");
  printf(NEGRITA "Hola, ¿Cómo te llamas?\n" NORMAL);
  printf(AZUL "Introduce tu nombre: " NORMAL);
  scanf(" %s", &nombre);
  printf("\n");

  printf(NEGRITA "Bienvenido %s, ¿puedes decirme tus apellidos?\n" NORMAL, nombre);
  printf(AZUL "Introduce tu primer apellido: " NORMAL);
  scanf(" %s", &apellido1);
  printf(AZUL "Introduce tu segundo apellido: " NORMAL);
  scanf(" %s", &apellido2);
  printf("\n");

  printf(NEGRITA "Encantado de conocerte %s %s %s, ¿Cómo te encuentras hoy?\n" NORMAL, nombre, apellido1, apellido2);
  printf("\n");
}
