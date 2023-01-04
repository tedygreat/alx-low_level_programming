#include "main.h"

/**
 * _strlen_recursion - function that perform the length of the string
 * @s:var
 * Return:length of strin
 */

int _strlen_recursion(char *s)
{
		int len = 0;
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
