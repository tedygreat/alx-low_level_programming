#include "main.h"

/**
 * main - func
 * Return:Always 0.
 */

int main(void)
{
		int pass;
		srand(time(NULL));
			int sum = 0;
	while (sum < 3000)
	{
	pass = (rand() % 128);
	sum = sum + pass;
	printf("%c", pass);
	}
	printf("%c", 4000 - pass);
	return (0);
}
