#include "main.h"

/**
* _strstr - locates a substring
* @needle: string to find
* @haystack: String to search
* Return: Pointer
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *src = haystack;
		char *i = needle;

		while (*haystack && *i && *haystack == *i)
		{
			haystack++;
			i++;
		}
		if (!*i)
			return (src);
		haystack = src + 1;
	}
	return (0);
}
