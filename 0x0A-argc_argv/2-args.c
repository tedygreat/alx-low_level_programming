#include "main.h"
#include <stdio.h>

/**
 * main - fun
 * @argc: var
 * @argv: arg
 * Return: Always0
 */

int main(int argc, char argv)
{
		int count;
			count = 0;
	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
