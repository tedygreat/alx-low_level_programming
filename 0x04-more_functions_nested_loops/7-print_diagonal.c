#include "main.h"

/**
 * print_diagonal - function that print diagonal
 * @n: variable
 */

void print_diagonal(int n)
{
		int i;
		int j;
if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		putchar('\\');
		putchar('\n');
		if (i + 1 < n)
		for (j = 0; j <= i; j++)
		{
			putchar(' ');
		}
	}
}
else
	putchar('\n');
}
