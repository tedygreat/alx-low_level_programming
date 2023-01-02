#include "main.h"

/**
 * _memset - fanuction that perform fills memory
 * @s: var
 * @b: var2
 * @n: var3
 * Return: memory pointed s
 */

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;
			i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}


	return (s);
}
