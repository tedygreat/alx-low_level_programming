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
		int j = 0;
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
	if (n > sz2)
		n = sz2;
	con = (char*)malloc((sz1 + n) * sizeof(char));
	if (con == NULL)
		return (0);
	for (i = 0; i < sz1; i++)
	{
		con[i] = s1[i];
	}
	for (i = sz1; i < (sz1 + n); i++)
	{
		con[i] = s2[j];
		j++;
	}
	con[i] = '\0';
	return (con);
}

