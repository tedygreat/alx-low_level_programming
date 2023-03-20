#include "main.h"

/**
 * _strcat - function that perform concatnating two string
 * @dest: var string one
 * @src: var string two
 * Return: char of two values
 */

char *_strcat(char *dest, char *src)
{
		int index = 0;
		int j;
	while (dest[index] != 0)
	{
		index++;
	}
	for (j = 0; src[j] != 0; j++)
	{
		dest[index + j] = src[j];
	}
	dest[index + j] = 0;
	return (dest);
}
