#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1;
    int op2;
    int Opcion;
    int Resultado;

    printf("Bienvenido/a a La calculadora programadora, en ella podrás realizar diversas operaciónes con dos números\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Introducir el primer número deseado: ");
    scanf(" %i", &op1);

    printf("Introducir el segundo número deseado: ");
    scanf(" %i", &op2);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    fflush(stdin);

    printf("¿Qué operación deseas realizar?\n");
    printf("Pulsa 1 si deseas sumar\n");
    printf("Pulsa 2 si deseas restar\n");
    printf("Pulsa 3 si deseas multiplicar\n");
    printf("Pulsa 4 si deseas dividir\n");
    printf("Pulsa 0 si deseas salir\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Escoge la opción deseada: ");


do{
    scanf("%i", &Opcion);
    switch(Opcion) {
    case 0:
           printf("Gracias por usar La Calculadora Programadora, esperamos que te haya sido de utilidad. Muchas gracias\n");
           return EXIT_SUCCESS;
    break;

    case 1: Resultado = op1+op2;
    break;

    case 2: Resultado = op1-op2;
    break;

    case 3: Resultado = op1*op2;
    break;

    case 4: Resultado = op1/op2;
    break;

    default: printf("En proceso\n");

  }

    printf("El resultado de la operación es: ");
    printf("%i\n\n", Resultado);
    printf("Para realizar otra operación, marque una opción: ");
 }while(Opcion!=0);
 }
