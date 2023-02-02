#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
		int l, i;
		int len = 0;
		unsigned int mult, num;
			num = 0;
			mult = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		len++;
	}
		l = len - 1;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num + ((b[l] - '0') * mult);
		mult = mult * 2;
		l--;
	}
	return (num);
}
