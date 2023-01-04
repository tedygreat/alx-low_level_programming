#include "main.h"


int _check(int, int);
/**
 * is_prime_number - function that checkes prime number
 * @n: var
 * Return: 1 for prime 0not prime
 */

int is_prime_number(int n)
{
	return (_check(n, 1));
}

/**
 * _check - func
 * @n: var
 * @i: var1
 * Return:value
 */

int _check(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	else if (n / i <  i)
		return (1);
	return (_check(n, i + 1));
}


