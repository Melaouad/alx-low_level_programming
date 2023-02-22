#include "main.h"
/**
 * print_last_digit - to print the last digit of a number.
 * @a: input number to view last digit.
 * Return: the last digit.
 */

int print_last_digit(int a)
{
	int d;

	d = a %  10;
	if (d < 0)
	{
		d = d * -1;
	}
	_putchar(d + '0');
	return (d);
}
