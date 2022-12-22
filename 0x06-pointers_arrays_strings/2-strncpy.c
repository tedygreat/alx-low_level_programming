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
		int index;
		int j;
	for (index = 0; src[index] != 0 && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (j = index; j < n; j++)
	{
		dest[index] = 0;
	}
	return (dest);
}
