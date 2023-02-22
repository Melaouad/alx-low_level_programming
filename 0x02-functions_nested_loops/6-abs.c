#include "main.h"
/**
 * _abs-prints - the absolute value of a number.
 * @a: input number to compute is absolute value.
 * Return: returns the absolute value.
 */
int _abs(int a)
{
	int i = a;
	int value;

	if (i < 0)
	{
		i = i * (-1);
	}
	value = i;
	return (value);
}
