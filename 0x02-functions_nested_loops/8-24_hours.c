#include "main.h"
/**
 * jack_bauer - to print every minute in the day starting from 00:00
 * Return: 0 if worked.
 */

void jack_bauer(void)
{
	int i;
	int a;
	int b;
	int c;

	for (i = 0; i <= 2; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			for (b = 0; b <= 5; b++)
			{
				for (c = 0; c <= 9; c++)
				{
					if (i == 2 && a > 3)
					{
						break;
					}
					_putchar(i + '0');
					_putchar(a + '0');
					_putchar(':');
					_putchar(b + '0');
					_putchar(c + '0');
					_putchar('\n');
				}
			}
		}
	}
}
