#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the given parameter
 */

void print_binary(unsigned long int n)
{
	int i;
	int  c;
	unsigned long int b;

	i = 63;
	c = 0;

	while (i >= 0)
	{
		b = n >> i;

		if (b & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
		i--;
	}
	if (!c)
		_putchar('0');
}
