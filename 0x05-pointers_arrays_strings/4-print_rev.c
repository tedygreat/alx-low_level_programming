#include "main.h"

/**
 * print_rev - afunction that print string revers
 * @s: str input
 * Return: nothing
 */

void print_rev(char *s)
{
	int strcoun = 0;
	int i, j;
	for (i = 0; s[i] != '\0'; i++)
	{
		strcoun++;
	}

	for (j = strcoun; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
