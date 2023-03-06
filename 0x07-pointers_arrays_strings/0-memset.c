#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: pointer where to put the constant
 * @b: constant byte
 * @n: maximum bytes to be used
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
