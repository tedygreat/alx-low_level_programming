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
	for (i = 1; i <= 100; i++)
	{
		mult = i % 3;
		mult1 = i % 5;
		if ((mult == 0) && (mult1 == 0))
		{
			printf("FizzBuzz");
		}
		else if (mult1 == 0)
		{
			printf("Buzz");
		}
		else if (mult == 0)
		{
			printf("Fizz");
		}
		else
			printf("%i", i);
		if (i != 0)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
