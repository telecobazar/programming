#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ceros, i, numero;

    ceros = 0;

    for ( i = 1 ; i <= 5 ; i++ )
    {
        printf( "\n   Introduzca número entero %d: ", 163, i );
        scanf( "%d", &numero );

        while ( numero == 0 )
        {
            ceros++;
            printf( "\n   Introduzca número entero %d: ", 163, i );
            scanf( "%d", &numero );
        }
    }

    printf( "\n   Ha introducido %d cero(s).", ceros );

    return EXIT_SUCCESS;
}
