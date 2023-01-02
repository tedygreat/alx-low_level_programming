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
	int j;
	int k = 0;
	int m = 0;
	while (s[k])
		k++;
	while (accept[m])
		m++;
	for (i = 0; i < k; i++)
		for (j =0; j < m; accept++)
			if (s[i] == accept[j])
				return (s);

	return ('\0');
}
