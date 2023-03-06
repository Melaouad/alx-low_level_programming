#include "main.h"

/**
* print_diagsums - Prints the sum of the two diagonals
* of a square matrix of integers.
* @a: The matrix of integers.
* @size: The size of the matrix.
*/

void print_diagsums(int *a, int size)
{
	int ind;
	int i;
	int b;

	i = 0;
	b = 0;
	ind = 0;

	while (ind < size)
	{
		i += a[ind];
		a += size;
		ind++;
	}

	a -= size;
	ind = 0;

	while (ind < size)
	{
		b += a[ind];
		a -= size;
		ind++;
	}

	printf("%d, %d\n", i, b);
}
