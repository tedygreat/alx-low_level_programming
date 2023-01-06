#include "main.h"

/**
 * _strchr - function that perform locate character in astring
 * @s: var
 * @c: char var
 * Return: pointer c
 */

char *_strchr(char *s, char c)
{
		int i = 0;
		int b;
	while (s[i])
		i++;
	for (b = 0; b <= i; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
