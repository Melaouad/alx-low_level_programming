#include "main.h"

/**
 * _chekcer - checker
 * @b: integer paramtr
 * @a: integer parameter
 * Return: chekcer
 */
int _chekcer(int a, int b)
{
	if ((a * a) > a)
		return (-1);
	if (a * a == b)
		return (a);
	return (_chekcer(a + 1, b));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_chekcer(1, n));
}
