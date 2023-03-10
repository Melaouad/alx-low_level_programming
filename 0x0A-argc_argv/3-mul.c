#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
*@argc: number of arguments
*@argv: array of the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	int i;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	i = a * b;

	printf("%d\n", i);
	return (0);
}
