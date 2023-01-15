#include <stdio.h>
#include <math.h>

/**
 * main - main function
 * Description: print largest prime number
 * Return: always 0.
 */

int main(void)

{
		int i;
		long n;
			n = 612852475143;
	for (i = (int) sqrt(n); i > 2; i++)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}



	return (0);
}
