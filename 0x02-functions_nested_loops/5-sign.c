#include "main.h"

/**
 * print_sign - print sign
 * @n: the number of sign print
 * Return: 1 if number greter than zero
 * 0 of number is xero
 * -1 if number is less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
