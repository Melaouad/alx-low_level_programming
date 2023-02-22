#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lowercase 10 times.
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	char i;
	char s;

	s = 0;

	while (s < 10)
	{
	i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
	s++;
	}
}
