#include "main.h"

/**
 * print_line - function that print line
 * @n: number of line
 */

void print_line(int n)
{
		int i;
		char l;
			l = '_';
	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			putchar(l);
		}
		putchar('\n');
	}
	else
		putchar('\n');
}
