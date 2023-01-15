#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - func
 * Return:Always 0.
 */

int main(void)
{
		int pass;
		int sum;
		srand(time(NULL));
			sum = 0;
	while (sum < 2645)
	{
	pass = (rand() % 128);
	sum = sum + pass;
	printf("%c", pass);
	}
	printf("%c", 2772 - pass);
	return (0);
}
