#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 char clave[4];

 printf("Introduzca su código secreto: ");
 scanf("%s",clave);

 if(strcmp(clave,"1234")==0)
 {
     printf("Bienvenido Mr. Marsal\n");
 }
 else
 {
     printf("Usted no es bienvenido\n");
 }

 return EXIT_SUCCESS;
}
