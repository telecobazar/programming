//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
#include <stdlib.h>

//Definir colores
#define NORMAL "\x1B[0m"
#define NEGRITA "\x1B[1m"

//Definir variables
#define D 3
#define X 0
#define Y 1
#define Z 2

int main(){
  double vertice[D];

  //Entrada de datos
  printf("(x, y, z): ");
  scanf(" ( %lf , %lf , %lf )",
         &vertice[X], &vertice[Y], &vertice[Z]);


  //salida de datos
  printf("(%.2lf, %.2lf, %.2lf) => ",
          vertice[X], vertice[Y], vertice[Z]);

  printf(NEGRITA "(%.2lf, %.2lf)\n" NORMAL,
          vertice[X]/vertice[Z],
          -vertice[Y]/vertice[Z]);


	return EXIT_SUCCESS;
}
