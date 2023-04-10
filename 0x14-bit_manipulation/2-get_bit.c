#include "main.h"

/**
 * get_bit - return value of a bit at a given index
 * @n: given decimal parameter
 * @index: index
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int o;

	o = (n >> index);
	if (index > 32)
	return (-1);
	return (o & 1);
}
