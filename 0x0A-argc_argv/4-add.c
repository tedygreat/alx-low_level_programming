#include "main.h"
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
	}
	count++;
	}
printf("%d\n", sum);
return (0);
}
