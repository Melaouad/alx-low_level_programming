#include "main.h"
/**
 * _isalpha - to check if the character is lowercase or uppercase
 * @c: input character.
 * Return: 0 if lowercase, 1 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
