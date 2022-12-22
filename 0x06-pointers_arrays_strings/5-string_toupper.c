#include "main.h"

/**
 * string_toupper - function that change lower case to uppercase
 * @s: string var
 * Return: charactr
 */

char *string_toupper(char *s)
{
		int i;
	for (i = 0; s[i] != 0 && s[i] >= 'a' && s[i] <= 'z'; i++)
	{
		s[i] = 'A' + 32;
	}

	return (s);
}
