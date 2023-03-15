#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * Return:  NULL or a pointer to an array.
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, b = 0;
	int length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	a = malloc(sizeof(char) * length);

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		a[b++] = s1[i];

	for (i = 0; s2[i]; i++)
		a[b++] = s2[i];

	return (a);
}
