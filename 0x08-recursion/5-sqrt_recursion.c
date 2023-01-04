#include "main.h"


int _squrt(int, int);
/**
 * _sqrt_recursion - function that perform square root of number
 * @n: var
 * Return: value
 */

int _sqrt_recursion(int n)
{
	return (_squrt(n, 1));
}
/**
 * _squrt - func
 * @n: var
 * @i: var2
 * Return: a number
 */

int _squrt(int n, int i)
{
		int sq = i * i;
	if (sq > n)
		return (-1);
	else if (sq == n)
		return (i);
	return (_squrt(n, i + 1));
}
