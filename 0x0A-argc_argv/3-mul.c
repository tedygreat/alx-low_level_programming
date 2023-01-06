#include "main.h"
#include <stdio.h>

/**
 * main - fun
 * @argc: var
 * @argv: arg
 * Return: o if true 1 for false
 */

int main(int argc, char *argv[])
{
		int a;
		int b;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("error\n");
	return (1);
}

