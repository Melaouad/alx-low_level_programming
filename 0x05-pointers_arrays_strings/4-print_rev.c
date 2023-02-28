#include "main.h"
/**
 * print_rev - prints the given string in reverse
 * @s: the input string
 * Return: 0
 */

void	print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
