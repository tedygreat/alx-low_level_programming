#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: var string
 * @src:var string
 * @n: int val
 * Return: copy value
 */

char *_strncpy(char *dest, char *src, int n)
{
		int index = 0;
		int j = 0;
	while (src[index++])
		j++;
	for (index = 0; src[index] != 0 && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = j; index < n; index++)
	{
		dest[index] = 0;
	}
	return (dest);
}
