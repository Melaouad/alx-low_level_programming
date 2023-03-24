#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by \n.
 * @separator: string
 * @n: number args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}
