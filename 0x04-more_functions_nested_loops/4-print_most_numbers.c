#include "main.h"

/**
 * print_most_numbers - function that perform print number 0 to 9 exept 2 & 4
 * Return: nothing
 */

void print_most_numbers(void)
{
		int i;
	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			putchar(i);
		}
	}
	putchar('\n');
}

