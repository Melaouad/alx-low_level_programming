#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of
* coins to make change for an amount of money
*@argc: number of arguments
*@argv: array of the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	int a;

	a = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	while (i > 0)
	{
		a++;
		if ((i - 25) >= 0)
		{
			i -= 25;
			continue;
		}
		if ((i - 10) >= 0)
		{
			i -= 10;
			continue;
		}
		if ((i - 5) >= 0)
		{
			i -= 5;
			continue;
		}
		if ((i - 2) >= 0)
		{
			i -= 2;
			continue;
		}
		i--;
	}
	printf("%d\n", a);
	return (0);
}
