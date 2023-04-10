#include "main.h"

/**
 * get_endianness - Checks the endianness.
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int num;
	char *i = (char *)&num;

	num = 1;

	if (*i == 1)
		return (1);

	return (0);
}
