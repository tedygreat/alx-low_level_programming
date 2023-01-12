#include "main.h"

/**
 * malloc_checked - func that allocates memory using malloc.
 * @b: var
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
		void *p;
			p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
