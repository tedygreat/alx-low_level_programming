#include "main.h"

/**
 * largest_number - returns the largest of 3 number
 * @a: first var integer
 * @b: second varinteger
 * @c: third integer
 * Return: Always the value
 */

int largest_number(int a, int b, int c)
{
		int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
