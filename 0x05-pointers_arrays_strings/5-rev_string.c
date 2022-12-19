#include "main.h"

/**
 * rev_string - afunction that print string revers
 * @s: str input
 * Return: nothing
 */

void rev_string(char *s)
{

		int i, j;
			char rev = s[0];
			int strcoun = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		strcoun++;
	}

	for (j = 0; j < strcoun; j++)
	{
		strcoun--;
		 rev = s[j];
		 s[j] = s[strcoun];
		 s[strcoun] = rev;


	}
}
