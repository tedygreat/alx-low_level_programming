#include "main.h"
/**
 * _isdigit - function that checkes number from 0 to 9
 * @c: variable to be checked
 * Return: For digit 1 otherwise 0
 */

int _isdigit(int c)
{
		int l;
	if (c >= '0' && c <= '9')
		l = 1;
	else
		l = 0;

	return (l);
}

