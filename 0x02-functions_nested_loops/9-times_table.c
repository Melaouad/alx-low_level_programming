#include "main.h"

/**
 * times_table - to Print the times table
 * Return: no return
 */
void times_table(void)
{
	int i;
	int s;
	int d;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (s = 1; s <= 9; s++)
		{
			d = i * s;
			_putchar(44);
			_putchar(32);
			if (d <= 9)
			{
				_putchar(32);
				_putchar(d + 48);
			}
			else
			{
				_putchar((d / 10) + 48);
				_putchar((d % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
