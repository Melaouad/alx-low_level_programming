#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number string
 * Return: the unsinged int number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	i = 0;
	num = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = 2 * num + (b[i] - '0');
		i++;
	}
	return (num);
}