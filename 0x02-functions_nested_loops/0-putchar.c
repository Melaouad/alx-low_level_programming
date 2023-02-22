#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 * Description: prints _putchar
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
