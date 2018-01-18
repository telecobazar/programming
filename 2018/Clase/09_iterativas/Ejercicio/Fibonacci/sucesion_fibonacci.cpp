#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){

  if (n<2)
    return n;
  else
    return fibonacci(n-1)+fibonacci(n-2);

}

int main(){

    int num=0,Resultado=0;

    printf("Introduce el numero de numeros: ");
    scanf("%i",&num);

    printf("Tu sucesión de números es la siguiente: ");
    for(int i=1;i<=num;i++){
        Resultado = fibonacci(i);
        printf("%i  ", Resultado);
    }

    return EXIT_SUCCESS;
}
