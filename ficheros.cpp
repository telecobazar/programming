#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

int main(){
  char caracter;
  bool fin;
  int cont;
FILE * mi_tubo;

mi_tubo = fopen("sombrero3picos.txt", "r");

do{
  fin = feof(mi_tubo);// indica el final del fichero
  fscanf(mi_tubo, "%c", &caracter);
  if(caracter=='i')
    cont++;
}while(!fin);
printf("%i\n",cont );
fclose(mi_tubo);
return 0;
}
