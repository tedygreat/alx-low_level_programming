#include "main.h"
/**
 * _memcpy - function that perform copy memory erea
 * @dest: var
 * @src: var1
 * @n: var2
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

