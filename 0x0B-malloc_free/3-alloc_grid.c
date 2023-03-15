#include "main.h"
#include <stdlib.h>

/**
* alloc_grid -  returns a pointer to a
* 2 dimensional array of integers.
*@width: width of array
*@height: height of array
*Return: Null or pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **b;
	int i = 0;
	int a;

	if (!(width > 0) || !(height > 0))
		return (NULL);
	b = (int **) malloc(sizeof(int *) * height);
	if (b != NULL)
	{
		for (; i < height; i++)
		{
			b[i] = (int *) malloc(sizeof(int) * width);
			if (b[i] != NULL)
			{
				for (a = 0; a < width; a++)
					b[i][a] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(b[i]);
					i--;
				}
				free(b);
				return (NULL);
			}
		}
		return (b);
	}
	else
	{
		return (NULL);
	}
}
