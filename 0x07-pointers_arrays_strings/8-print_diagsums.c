#include "main.h"
/**
 * print_diagsums - function that perform sum of two diagonals
 * @a: var
 * @size: var2
 */

void print_diagsums(int *a, int size)
{
		int i;
		int sum = 0;
		int sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum = sum + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
