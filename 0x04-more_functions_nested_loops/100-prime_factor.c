#include <stdio.h>

/**
 * main - main function
 * Description: print largest prime number
 * Return: always 0.
 */

int main(void)

{
		long int i, n;
		n = 612852475143;
		i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			n = n / 2;
			printf ("%ld", i);
		}
		i++;
	}



	return (0);
}
