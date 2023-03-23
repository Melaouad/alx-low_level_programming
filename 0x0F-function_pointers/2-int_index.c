#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array with data
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}
	return (-1);
}
