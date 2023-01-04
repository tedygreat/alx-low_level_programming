#include "main.h"

/**
 * factorial - function that perform factorial of agiven number
 * @n: var
 * Return: factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
