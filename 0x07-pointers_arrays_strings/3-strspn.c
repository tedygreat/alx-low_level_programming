#include "main.h"

/**
 * _strspn - function that perform get the length of prifix substring
 * @s: var
 * @accept: var
 * Return: number of byte
 */

unsigned int _strspn(char *s, char *accept)
{
		int i = 0;
		int j;
		
			int count = 0;
	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (*s == accept[i])
		{
			count++;
			break;
		}
		
		else if (accept[i + 1] == '\0')
			return (count);
		
	}
	return (count);
}
