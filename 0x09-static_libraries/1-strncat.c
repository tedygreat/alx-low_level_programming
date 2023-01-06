#include "main.h"

/**
 * _strncat - function that perform concatination
 * @dest: firt var string
 * @src: second var string
 * @n: intger var byte
 * Return: char of two concatenat var
 */

char *_strncat(char *dest, char *src, int n)
{
		int index = 0;
		int j = 0;
	while (dest[index] != 0)
	{
		index++;
	}
	for (j = 0; dest[j] != 0; j++)
	{
		dest[index + j] = src[j];
		if (j >= n)
			break;
	}
	dest[index + j] = 0;

	return (dest);
}
