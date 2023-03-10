#include "main.h"

/**
 * _memcpy - Copies content from source to destination
 * @src: sourcepointer
 * @dest: destination area
 * @n: Number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
