#include "main.h"
#include "stdlib.h"

/**
 * create_array - fun of array char and initialize
 * @size: var
 * @c:var1
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
		char *ptr;
		unsigned int pos = 0;
	if (size == 0)
	{
		return (0);
	}
	else
	{
		ptr = (char *) malloc(size * sizeof(char));
		while (pos < size)
		{
			*(ptr + pos) = c;
			pos++;
		}
	}
	return (ptr);
}
