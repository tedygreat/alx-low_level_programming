#include <stdio.h>

/**
 * main - main fun
 * Description: print number
 * Return: Always 0.
 */

int main(void)
{
		int i;
		int mult;
		int mult1;
		int mult2;
	for (i = 1; i <= 100; i++)
	{
		mult = i % 3;
		mult1 = i % 5;
		mult2 = i % 15;
		if (mult == 0)
		{
			printf("Fizz");
		}
		else if (mult1 == 0)
		{
			printf("Buzz");
		}
		else if (mult2 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", i);
		if (i != 0)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
