#include "main.h"

/**
 * reverse_array - function that revers content of an array
 * @a: arry element
 * @n:nember of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
		int i;
		int org;
		int rev;
	for (i = 0; i < n; i++)
	{
		org = a[i];
		rev = a[n - 1];
		a[i] = rev;
		a[n - 1] = org;
		n--;
	}

}
