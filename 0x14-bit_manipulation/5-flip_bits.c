#include "main.h"

/**
 * flip_bits - returns the number of bit
 * @n: The given number.
 * @m: The number to flip n to.
 * Return: number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned long int b;

	i = n ^ m;
	b = 0;

	while (i > 0)
	{
		b += (i & 1);
		i >>= 1;
	}

	return (b);
}
