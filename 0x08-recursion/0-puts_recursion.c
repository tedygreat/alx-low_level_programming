#include "main.h"

/**
 *  _pusts_recursion - function that print string
 *  @s: var
 */

void _puts_recursion(char *s)
{
	if(*s)
	{
	_putchar(*s);
	_put_recursion(s + 1);
	}
	else
	_putchar('\n');
}


	
