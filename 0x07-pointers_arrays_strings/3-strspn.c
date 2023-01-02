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
		int k = 0;
		int j;
		int m;
			int count = 0;
	while (s[i])
		i++;
	while (accept[k])
		k++;
	for (j = 0; j < i; j++)
	{
		for (m = 0; m < k; m++)
		{
			if (s[i] == accept[m])
				count = count + 1;
		}
	}
	return (count);
}
