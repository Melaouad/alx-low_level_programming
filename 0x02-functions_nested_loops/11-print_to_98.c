#include <stdio.h>
/**
 * print_to_98 - it print all natural numbers
 * @n: input number.
 * Return: no return.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("%d\n", n);
}
