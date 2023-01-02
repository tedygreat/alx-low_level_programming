#include "main.h"

/**
 * _memset - fanuction that perform fills memory
 * @s: var
 * @b: var2
 * @n: var3
 * Return: memory pointed s
 */

 char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i ;
		char valu;
		unsigned char *memory;
			*memory = s;
			value = b;
			i =0;
	while (i < n)
	{
		memory[i] = value;
		i++;
	}


	return (memory);
}
