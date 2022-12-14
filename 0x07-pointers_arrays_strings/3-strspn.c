#include "main.h"

/**
 * _strspn - function that perform get the length of prifix substring
 * @s: var
 * @accept: var
 * Return: number of byte
 */

unsigned int _strspn(char *s, char *accept)
{
		int index;
			unsigned int count = 0;
	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				count++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
