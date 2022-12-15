#include "main.h"

/**
 * more_numbers -function that perform printing number 14 times
 * Return: nothing
 */

void more_numbers(void)
{
		int i;
		int j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if(j >= 10)
			putchar('1');
			putchar(j % 10 + '0');
		}
		putchar('\n');
		
	}
}
