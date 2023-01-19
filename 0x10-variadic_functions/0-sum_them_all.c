#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that return the sum of all its par
 * @n: var num
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
		va_list arg;
		unsigned int i;
		int sum;
			sum = 0;
	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (arg);
}
