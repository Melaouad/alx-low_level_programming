#include "main.h"

/**
 * print_alphabet - print alphabets
 * Description: prints aphabets
 */

void	print_alphabet(void)
{
	int i;
	char *s = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	while (i < 27)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
