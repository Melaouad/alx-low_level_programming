#include "main.h"

/**
 * swap_int - swap the values of a and b
 * @a: pointer num 1
 * @b: pointer num 2
 * Return: nothing
 */

void	swap_int(int *a, int *b)
{
	int *c;

	c = a;
	a = b;
	b = c;
}
