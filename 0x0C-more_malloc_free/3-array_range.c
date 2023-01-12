#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - fun that creates an array of integer
 * @min: var
 * @max: var1
 * Return: intger val
 */

int *array_range(int min, int max)
{
		int i;
		char *con;
	if (min > max)
	{
		return (0);
	}
			con = malloc(4 * (max - min) + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ((min - max) + 1); i++)
	{
		con[i] = min++;
	}
	return (con);
}
