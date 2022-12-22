#include "main.h"

/**
 * leet - function tha encodes string to 1337
 * Return: char
 */

char *leet(char *s)
{
	char low_up[5][2] = {{'a', 'A'}, {'e', 'E'}, {'o', 'O'},
		{'t', 'T'}, {'l', 'L'}};
		char values[] = {'4', '3', '0', '7', '1'};
		int i, j;
	for (i = 0; s[i] != 0; i++)
	{

			char c = s[i];
		for (j = 0; j < 5; j++)
		{
			if (c == low_up[j][0] || c == low_up[j][1])
			{
				s[i] = values[j];
				break;
			}
		}
	}
	return (s);
}
