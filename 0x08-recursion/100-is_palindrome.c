#include "main.h"
#include <string.h>
#include <stdio.h>

int is_pal(char *, int);
int count(char *, int);
/**
 * is_palindrome - function that return 1 is string is palindrome
 * @s: var
 * Return: 1 if true or 0
 */

int is_palindrome(char *s)
{
		int j;
			j = count(s, 0);
	return (is_pal(s, j));

}

/**
 * count - function
 * @a: var
 * @j:var
 * Return:lenth
 */
int count(char *a, int j)
{
	if (*a == 0)
		return (j - 1);
	return (count(a + 1, j + 1));
}

/**
 * is_pal -function that checks
 * @a: string var
 * @i: length var
 * Return: number
 */
int is_pal(char *a, int i)
{
	if (*a != *(a + i))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}
	return (is_pal(a + 1, i - 2));
}
