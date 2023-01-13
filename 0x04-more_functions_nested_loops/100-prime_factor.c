#include <stdio.h>

/**
 * main - main function
 * Description: print largest prime number
 * Return: always 0.
 */

int main(void)

{
		long i;
		long n;
			n = 612852475142;
	for (i = n; i > 2; i--)
	{
		if (n % i == 0)
		{
			printf("%ld\n", i);
			break;
		}
	}



	return (0);
}
