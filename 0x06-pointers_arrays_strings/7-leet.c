#include "main.h"

/**
 * leet - function tha encodes string to 1337
 * @s: var
 * Return: char
 */

char *leet(char *s)
{
		char l[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
		char values[] = {'4', '3', '0', '7', '1'};
		int i, j;
		char c;
	for (i = 0; s[i] != 0; i++)
	{
		c = s[i];
		for (j = 0; j < 5; j++)
		{
			if (c == l[j][0] || c == l[j][1])
			{
				s[i] = values[j];
				break;
			}
		}
	}
	return (s);
}
