#include "main.h"

/**
 * puts_half - a function that print hafe of string
 * @str: input var
 * Return: nothing
 */

void puts_half(char *str)
{
		int i, k, j, count;
			count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count % 2 == 0)
	{
		j = count / 2;
	}
	else
		j = (count + 1) / 2;


	for (k = j; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
