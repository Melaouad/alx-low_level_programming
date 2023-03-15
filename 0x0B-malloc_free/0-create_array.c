#include "main.h"
#include <stdlib.h>
/**
 *create_array -  creates an array of chars
 *                initializes it with a specific char
 *@size: size of amount of memory to allocate in bytes
 *@c: char to initialize with the array
 *Return: Null or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
