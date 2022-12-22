#include "main.h"

/**
 * _strcmp - function that compares two string
 * @s1: var one
 * @s2: var two
 * Return: vlaue of compared value
 */

int _strcmp(char *s1, char *s2)
{
		int i;
			int def = 0;
	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		def = s1[i] - s2[i];
		if (def != 0)
			break;
	}
	return (def);
}
