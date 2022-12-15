#include "main.h"
/**
 * _isupper - function for check is upper or lower case
 * @c: variable to be checked
 * Return: upper case for 1 else 0
 */

int _isupper(int c)

{
		int l;		
	if (c >= 'A' && c <= 'Z')
		l = 1;
	else
		l = 0;
	return (l);
}
