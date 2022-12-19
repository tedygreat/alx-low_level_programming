#include "main.h"

/**
 * print_rev - afunction that print string revers
 * @s: str input
 * Return: nothing
 */

void print_rev(char *s)
{

		int i, j;
			int strcoun = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		strcoun++;
	}

	for (j = strcoun - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
