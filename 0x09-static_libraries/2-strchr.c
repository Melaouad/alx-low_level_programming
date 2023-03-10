#include "main.h"

/**
 * _strchr -Search for a character in a string
 * @s: The target string to be searched in
 * @c: The character to be found
 * Return: Pointer to @s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}

	return (0);
}
