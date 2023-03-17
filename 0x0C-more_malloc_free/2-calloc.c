#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: NULL or pointer to an allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *temp;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	temp = malloc(size * nmemb);

	if (temp == NULL)
		return (NULL);

	a = temp;
	i = 0;

	while (i < (size * nmemb))
	{
		a[i] = '\0';
		i++;
	}

	return (temp);
}
