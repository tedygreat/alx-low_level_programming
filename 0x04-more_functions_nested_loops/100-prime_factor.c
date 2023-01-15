#include <stdio.h>
#include <math.h>

/**
 * main - main function
 * Description: print largest prime number
 * Return: always 0.
 */

int main(void)

{
		long i;
		long n;
			n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", i);

	return (0);
}
