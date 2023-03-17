#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes.
 * Return: NULL or pointer to a memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int a = n;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (j = 0; s1[j]; j++)
		a++;

	i = malloc(sizeof(char) * (a + 1));

	if (i == NULL)
		return (NULL);

	a = 0;

	for (j = 0; s1[j]; j++)
		i[a++] = s1[j];

	for (j = 0; s2[j] && j < n; j++)
		i[a++] = s2[j];

	i[a] = '\0';

	return (i);
}
