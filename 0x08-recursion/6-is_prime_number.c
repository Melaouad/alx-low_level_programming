#include "main.h"

int	tmp_prime(int n, int i);

/**
 * _divide - check if the number is prime
 * @a: integer params
 * @b: integer params
 * Return: boolean
 */
int _divide(int a, int b)
{
	if (b % a == 0)
	{
		return (0);
	}
	else if (b / 2 > a)
	{
		return (_divide(a + 2, b));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - is this a prime
 * @n: integer to be checked
 * Return: yes 1 or no 0
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (_divide(3, n));
	}
}
