#include "main.h"

/**
 * _pow_recursion - function that perform value of x raised y
 * @x: var
 * @y: var1
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
