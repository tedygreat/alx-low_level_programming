#include "main.h"
#include  <unistd.h>
#include <stdio.h>

/**
 * main - fun
 * @argc: var
 * @argv: arg
 * Return: Always0
 */

int main(int argc, char *argv[])
{
		int count;
			count = 0;
	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
