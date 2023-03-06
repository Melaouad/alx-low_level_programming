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
	b = 0;

	while (a[i][7])
	{
		while (b < 8)
		{
			_putchar(a[i][b]);
			b++;
		}
		_putchar('\n');
		i++;
	}
}
