#include "main.h"
/**
 *_pow_recursion - return x power y
 *@x: x to raise to power y
 *@y: y to be raised by x
 *Return: i
 */
int	_pow_recursion(int x, int y)
{
	int i;

	i = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	i *= _pow_recursion(x, y - 1);

	return (i);
}
