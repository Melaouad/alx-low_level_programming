#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
*@argc: number of arguments
*@argv: array of the arguments
*Return: 0 or 1 in case of error
*/
int main(int argc, char *argv[])
{
	int i;
	int a;
	int b;

	b = 0;
	i = 1;

	while (i < argc)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			if (argv[i][a] < '0' || argv[i][a] > '9')
			{
				printf("Error\n");
				return (1);
			}
			a++;
		}

		b += atoi(argv[i]);
		i++;
	}

	printf("%d\n", b);

	return (0);
}
