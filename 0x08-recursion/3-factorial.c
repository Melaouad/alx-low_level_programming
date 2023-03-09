#include "main.h"
/**
 *factorial - return the factorial of a number
 *@n:number to find its factorial
 * Return:  the factorial of n or return 1
 */
int factorial(int n)
{
	int i;

	i = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	i *= factorial(n - 1);

	return (i);
}
