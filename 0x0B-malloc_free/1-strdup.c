#include  "main.h"
#include "stdlib.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strdup - fun that allocate newly allocated space
 * @str: var
 * Return: char
 */

char *_strdup(char *str)
{
		char *dst;
		unsigned int size;
	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	dst = (char *) malloc(size * sizeof(char));
	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}

/**
 * _strlen - fun that count string length
 * @s: var string
 * Return: lenth
 */
int _strlen(char *s)
{
		unsigned int i;
			i = 0;
	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
/**
 * _strcpy - fun that copy an arry
 * @dest: destnetion
 * @src: source file
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
		int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

