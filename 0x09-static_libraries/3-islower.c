#include "main.h"
/**
 * _islower - to check if the character is lowercase.
 * @c: input character.
 * Return: 0 if lowercase, 1 if not.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
