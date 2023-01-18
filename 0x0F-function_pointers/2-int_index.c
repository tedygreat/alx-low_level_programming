#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches intger
 * @array: var
 * @size: var1
 * @cmp: var2
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
		int i;
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
