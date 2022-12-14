#include "main.h"

/**
 * print_last_digit - printing digi
 * @n: the number
 * Return: Value of the las digit
 */

int print_last_digit(int n)
{
		int ld;
			ld = (n % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}


	_putchar(ld + '0');

	return (ld);
}
