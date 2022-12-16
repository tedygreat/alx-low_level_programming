#include "main.h"

/**
 * print_triangle - function
 * @size: var
 */
void print_triangle(int size)
{
		int i;
		int j;
if (size > 0)
{
	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= 1; j--)
		{
			if (i < j)
				putchar(' ');
			else
				putchar('#');
		}
		putchar('\n');
	}
}
else
putchar('\n');
}

