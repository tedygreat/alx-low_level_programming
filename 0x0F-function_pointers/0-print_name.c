#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that point name
 * @name: var
 * @f: var1
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
