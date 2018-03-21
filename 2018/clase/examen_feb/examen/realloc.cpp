#include <stdlib.h>
#include <stdio.h>

int main() {

	double *midouble;

	midouble = (double*) malloc (sizeof (double));
	*midouble = 3.5;

	midouble = (double*) realloc (midouble, 2 * sizeof(double));
	*midouble = 7.8;


   return EXIT_SUCCESS;


}
