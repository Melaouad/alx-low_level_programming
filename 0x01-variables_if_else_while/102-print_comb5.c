#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print every possible combination of 2 digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	int i;
	int e;
	int f;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (e = 48; e <= 57; e++)
			{
				for (f = 48; f <= 57; f++)
				{
				if (((e + f) > (c + i) &&  e >= c) || c < e)
				{
					putchar(c);
					putchar(i);
					putchar(' ');
					putchar(e);
					putchar(f);

					if (c + i + e + f == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
