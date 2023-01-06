#include "main.h"

/**
 * _atoi - func
 * @s: input
 * Return:Always 0.
 */

int _atoi(char *s)
{
	int sign;
	unsigned int  num;
	char *var;
			var = s;
			num = 0;
			sign = 1;

	while (*var != '\0' && (*var < '0' || *var > '9'))
	{
		if (*var == '-')

			sign = sign * -1;
		var++;
	}

	if (*var != '\0')
	{
		do {
			num = num * 10 + (*var - '0');
			var++;
		} while (*var >= '0' && *var <= '9');
	}


	return (num * sign);
}
