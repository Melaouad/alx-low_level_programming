#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: Character to check for
* @accept: Character to look for
* Return: Character
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int a;

	i = 0;
	a = 0;

	while (s[i] != '\0')
	{
		while (accept[a] != '\0')
		{
			if (s[i] == accept[a])
				return (s + i);
			a++;
		}
		i++;
	}
	return (0);
}
