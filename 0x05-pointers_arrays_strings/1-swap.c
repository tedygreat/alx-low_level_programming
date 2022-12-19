#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the value of integer
 * @a: first var inp
 * @b: second var inp
 */

void swap_int(int *a, int *b)
{
		int n;
	n = *a;
	*a = *b;
	*b = n;
}
