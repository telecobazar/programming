#include <stdio.h>
#include <stdlib.h>

int main(){

    int op1;
    int op2;
    int x;
    int Resultado;

    printf("Introducir el primer número deseado: ");
    scanf(" %i", &op1);

    printf("Introducir el segundo número deseado: ");
    scanf(" %i", &op2);

    printf("¿Qué operación deseas realizar?\n");
    printf("Pulsa 1 si deseas sumar\n");
    printf("Pulsa 2 si deseas restar\n");
    printf("Pulsa 3 si deseas multiplicar\n");
    printf("Pulsa 4 si deseas dividir\n");
    scanf("%i", &x);

    switch('x') {
    printf("El resultado final de la suma es: ");
    case 1: Resultado = op1+op2;
    break;

    printf("El resultado final de la resta es: ");
    case 2: Resultado = op1-op2;
    break;

   printf("El resultado final de la multiplicación es: ");
    case 3: Resultado = op1*op2;
    break;

   printf("El resultado final de la división es: ");
    case 4: Resultado = op1/op2;
    break;
    default: printf("%i\n", Resultado);}

    return EXIT_SUCCESS;
 }
