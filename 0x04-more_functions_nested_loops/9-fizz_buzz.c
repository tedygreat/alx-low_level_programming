#include <stdio.h>

/**
 * main - main fun
 * Description: print number
 * Return: Always 0.
 */

int main(void)
{
		int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
			printf("%i", i);
		if (i != 0)
			printf(" ");
	}
	printf("\n");
	return (0);
}
