#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - function reallocate memory block
 * @ptr: var
 * @old_size: var1
 * @new_size: var2
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
		void *mem;
		unsigned int i;
		char *ptr_copy, *fill;
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			return (NULL);
		}
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_copy = ptr;
	mem = malloc(sizeof(ptr_copy) * new_size);
	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}
	fill = mem;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		fill[i] = *ptr_copy++;
	}
	free(ptr);
	return (mem);
}


