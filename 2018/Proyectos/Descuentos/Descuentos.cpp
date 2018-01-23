#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define ROJO "\x1B[1;31m"
#define NORMAL "\x1B[0m"
#define AMARILLO "\x1B[1;33m"
#define VERDE "\x1B[1;32m"
#define AZUL "\x1B[1;34m"
#define NEGRITA "\x1B[1m"
#define AZULETE "\x1B[1;36m"

int main(){

        int random, Opcion;
	
	float gasto, ncargo;

	time_t tiempo = time(0);
	struct tm *tlocal = localtime(&tiempo);

	char output[128];
	strftime(output, 128, "%d/%m/%y a las %H:%M:%S", tlocal);

	printf("\n");
	system("toilet -fpagga TOMBOLA BARATEJA");
	printf("\n");
	sleep(2);
	printf(AMARILLO "|     Te damos la bienvenida ");
	printf("%s", getenv("USER"));
	printf("\n" NORMAL);
	sleep(1);
	printf(VERDE "|     TÓMBOLA BARATEJA v1.0 ~ Versión 'ESTABLE'\n" NORMAL);
	sleep(1);
	printf(AZULETE "|     Iniciada el %s\n" NORMAL,output);
	printf("+---------------------------------------------------------------------+\n");
  	sleep(1);

	printf(
      NEGRITA "|     Tómbola Barateja\n"
              "|     Simple programa que al introducir un precio, entrarás en\n"
              "|     el azar de una promoción de descuentos, pero si tu compra es\n"
              "|     inferior a 50€, no jugarás.\n" NORMAL);
	printf("+---------------------------------------------------------------------+\n\n");
	sleep(2);
	printf("|     Pulsa" VERDE " 'ENTER' " NORMAL "para para comenzar");

    	while(getchar()!='\n');



do{
        system("clear");
        system("toilet -fpagga TOMBOLA BARATEJA\n\n");
        system("toilet -fpagga JUEGO DEL DESCUENTO\n\n");
        printf("+---------------------------------------------------------------------+\n\n");
        printf(AZUL "\t  Introduce la cantidad total de la compra: " NORMAL);
	scanf("%f",&gasto);

	while (gasto < 0){	
	printf("No aceptamos un total de compra negativo, introduzca de nuevo: ");
	scanf("%f",&gasto);
	}

	if (gasto >= 50){

	printf("Tu compra ha sido igual o superior a los 50€, por lo tanto participarás en la promoción\n");
	printf(VERDE "\n\t\t   COLOR\t\t    DESCUENTO\n\n" NORMAL);
	printf(NEGRITA"\t\tBOLA BLANCA" NORMAL "\t\tNO HAY DESCUENTO\n");
	printf(ROJO "\t\tBOLA ROJA" NORMAL "\t\t      10%%\n");
	printf(AZULETE "\t\tBOLA AZUL" NORMAL "\t\t      20%%\n");
	printf(VERDE "\t\tBOLA VERDE" NORMAL "\t\t      25%%\n");
	printf(AMARILLO "\t\tBOLA AMARILLA" NORMAL "\t\t      50%%\n\n");

        srand(time(NULL)); /* Random*/

        random=rand()%5; /*Genera los números random, según el número que marquemos*/

        switch(random){
          case 1:
            printf("¡Gracias por comprar!\n\n"
                   "Lamentablemente usted, ha sacado una bola " NEGRITA"'BLANCA'\n" NORMAL);

            printf("El precio de su compra será %.2f €\n\n", gasto);

          break;

          case 2:
            printf("¡Gracias por comprar!\n\n"
                   "Usted acaba de sacar una bola azul\n\n");

            printf("¡¡ENHORABUENA!!, ACABA DE GANAR UN 20%% DE DESCUENTO \n\n");
            ncargo=gasto-(gasto*0.2);

            printf("Por lo tanto, el precio de su compra será %.2f €\n\n", ncargo);

	 break;

	 case 3:
            printf("¡Gracias por comprar!\n\n"
                   "Usted acaba de sacar una bola verde\n\n");

	    printf("¡¡ENHORABUENA!!, ACABA DE GANAR UN 25%% DE DESCUENTO\n\n");
	    ncargo=gasto-(gasto*0.25);

	    printf("Por lo tanto, el precio de su compra será %.2f €", ncargo);

	 break;

	 case 4:	 		
	 printf("¡Gracias por comprar!\n\n"
                "Usted acaba de sacar una bola azul\n\n");

	 printf("¡¡ENHORABUENA!!, ACABA DE GANAR UN 50%% DE DESCUENTO\n\n");
	 ncargo=gasto-(gasto*0.5);

	 printf("Por lo tanto, el precio de su compra será %.2f €", ncargo);

	 break;

	}

	}

	else{

	printf("Lo sentimos, pero tu compra no supera los 50€, por lo tanto no podrás participar en el juego\n\n");

}

}while(Opcion!=0);

}
