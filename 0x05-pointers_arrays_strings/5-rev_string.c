#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the given string to be reversed
 * Return: nothing
 */

void	rev_string(char *s)
{
	int len;
	int i;
	int d;
	char tmp;

	len = _strlen(s);
	i = 0;
	d = len / 2;

	while (d--)
	{
		tmp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}
