#include "main.h"

/**
 * rot13 - function that incode root13
 * @s: var
 * Return: encod char
 */

char *rot13(char *s)
{
		char alph[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
		char encode[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
		int i = 0, j;
		char c;
	while (s[i] != 0)
	{
		c = s[i];
		for (j = 0; j < 52; j++)
		{
			if (c == alph[j])
			{
				s[i] = encode[j];
			}
		}
		i++;
	}
	return (s);
}
