#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[31m"
#define NORMAL "\x1B[0m"

int main() {
    system("toilet --gay -fpagga DATOS");
    int entero = 34;
    float realillo = 35.7; // Ha caído en desgracia
    double real = 35.7;
    unsigned char byte = 97;

    long int entero_largo = 93;
    unsigned positivo = 5;

    printf("%i  \t(%lu bytes)\n", entero, sizeof(int));
    printf("%li \t(%lu bytes)\n", entero_largo, sizeof(int));
    printf("%u  \t(%lu bytes)\n", positivo, sizeof(int));

    printf("%i  \t(%lu bytes)\n", byte, sizeof(char));

    printf("%f  \t(%lu bytes)\n", realillo, sizeof(float));
    printf("%8.2lf  \t(%lu bytes)\n", real, sizeof(double));  // Long Float
    
    printf("%c%c%c", 49, 50, 10);
    printf("%c%c%c", 0x31, 0x32, 0xA);
    printf("%c%c%c", '1', '2', '\n');
    printf(ROJO "12\n" NORMAL);

    return EXIT_SUCCESS;
}
