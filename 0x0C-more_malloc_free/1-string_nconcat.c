#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - fun that concatenates two string
 * @s1: var1
 * @s2: var2
 * @n: var3
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		char *con;
		unsigned int sz1 = 0, sz2 = 0, i;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[sz1] != '\0')
		sz1++;
	while (s2[sz2] != '\0')
		sz2++;
	if (n >= sz2)
		n = sz2;
	con = malloc((sz1 + n + 1) * sizeof(char));
	if (con == NULL)
		return (NULL);
	for (i = 0; i < sz1; i++)
	{
		con[i] = s1[i];
	}
	for (; i < (sz1 + n); i++)
	{
		con[i] = s2[i - sz1];
	}
	con[i] = '\0';
	return (con);
}

