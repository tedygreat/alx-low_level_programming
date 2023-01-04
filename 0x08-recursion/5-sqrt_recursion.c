#include "main.h"


int squrt(int, int);
/**
 * _sqrt_recursion - function that perform square root of number
 * @n: var
 * Return: value
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
/**
 * squrt - func
 * @n: var
 * @i: var2
 * Return: a number
 */

int squrt(int n, int i)
{
		int squre = i * i;
	if (squre > n)
		return (-1);
	else if (squre == n)
		return (i);
	return (squrt(n, i + 1));
}
