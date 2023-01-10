#include "main.h"
int _strlen(char *s);
/**
 * str_concat - function that perform concatnate two string
 * @s1: var1
 * @s2: var2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
		char *con;
		unsigned int i, j, size;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
		size = (_strlen(s1) + _strlen(s2) + 1);
		con = (char *) malloc(size * sizeof(char));
	if (con == 0)
	{
		return (0);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(con + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(con + i) = *(s2 + j);
		i++;
	}
	return (con);
}

/**
 * _strlen - function that count string length
 * @s: var
 * Return: concatnet char
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

