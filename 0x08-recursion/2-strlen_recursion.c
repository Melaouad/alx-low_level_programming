#include "main.h"
/**
 *_strlen_recursion - find the lenght of a string
 *@s : input pointer to string
 *Return: length of the string
 */
int	_strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (!(*s == '\0'))
	{
		i++;
		i +=  _strlen_recursion(s + 1);
	}
	return (i);
}
