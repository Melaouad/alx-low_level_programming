#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: The first value of the array.
 * @max: The last value of the array.
 * Return: NULL or a pointer to memory.
 */
int *array_range(int min, int max)
{
	int *temp;
	int i;
	int b;

	i = 0;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	temp = malloc(sizeof(int) * b);

	if (temp == NULL)
		return (NULL);

	while (i < b)
	{	temp[i] = min++;
		i++;
	}

	return (temp);
}
