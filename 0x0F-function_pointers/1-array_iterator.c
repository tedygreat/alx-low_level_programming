#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes agiven function
 * @array: var
 * @size: var1
 * @action: var2
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
