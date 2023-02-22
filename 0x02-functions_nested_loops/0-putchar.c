#include "main.h"
/**
 * main - Entry point
 * Description: prints putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char *s = "_putchar";

	i = 0;

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	return (0);

}
