#include "variadic_functions.h"

/**
* sum_them_all -  sum of all its parameters
* @n: n of args
* Return: 0 or sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list arguments;

	sum = 0;
	i = 0;

	if (n)
	{
		va_start(arguments, n);
		while (i < n)
		{
			sum += va_arg(arguments, int);
			i++;
		}
		va_end(arguments);
	}
	return (sum);
}
