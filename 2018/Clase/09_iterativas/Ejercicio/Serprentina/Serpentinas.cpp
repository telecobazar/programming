#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
    for(int filas=0; filas<N; filas++){
        for(int t=0; t<6; t++)
            for(int columnas=0; columnas<N; columnas++)
                if(filas==columnas && t%2==0)
                    printf(" * ");
                else
                    if(filas+columnas==2 && t%2!=0)
                        printf(" * ");
                    else
                        printf(" ");
        printf("\n");
    }

    return EXIT_SUCCESS;

}
