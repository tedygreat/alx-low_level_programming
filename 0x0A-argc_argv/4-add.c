#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * check_num - fun
 * @str: array
 * Return: Always 0
 */

int check_num(char *str)
{
		unsigned int count;
			count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - fun
 * @argc: var
 * @argv: arg
 * Return: always 0
 */
int main(int argc, char *argv[])
{

/*declaration*/

		int count;
		int str_to_int;
		int sum;
			count = 1;
			sum = 0;
	while (count < argc)
	{
	if (check_num(argv[count]))
	{
		str_to_int = atoi(argv[count]);
		sum += str_to_int;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	count++;
	}
printf("%d\n", sum);
return (0);
}
