#include "main.h"

/**
 * _strpbrk - function that perform search astring
 * @s: var
 * @accept: var
 * Return: pointer byte
 */

char *_strpbrk(char *s, char *accept)
{
		int i;
	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
