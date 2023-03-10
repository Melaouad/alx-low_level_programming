#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: The chessboard to be printed.
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int b;

	i = 0;

	while (i < 8)
	{
		b = 0;
		while (b < 8)
		{
			putchar(a[i][b]);
			b++;
		}
		putchar('\n');
		i++;
	}
}
