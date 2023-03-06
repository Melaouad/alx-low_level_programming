#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
* @s: The character to print
* @accept: Character to start
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}

	return (i);

}
