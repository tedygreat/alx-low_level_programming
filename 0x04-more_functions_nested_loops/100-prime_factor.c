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
	for (i = (n-1);i > 22; i--)
	{
		if (n % i == 0)
		{
			printf ("%ld\n", i);
			break;
		}
	}



	return (0);
}
