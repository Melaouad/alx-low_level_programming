#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated
* space in memory
*@str: input tring to be copied
*Return: NULL or pointer to array
*/

char *_strdup(char *str)
{
	char *temp;
	int a;
	int i;

	a = 0;

	if (str == NULL)
		return (NULL);

	while (str[a])
	{
		i++;
		a++;
	}
	temp = malloc(sizeof(char) * (i + 1));

	if (temp == NULL)
		return (NULL);
	a = 0;
	while (str[a])
	{
		temp[a] = str[a];
		a++;
	}

	temp[i] = '\0';

	return (temp);

}
