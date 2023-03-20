#include "main.h"
#include <stdio.h>

/**
 * _strlen - is a function that return the length of string
 * @s: charinput variable
 * Return: length
 */

int _strlen(char *s)
{
	int i;
	int j = 1;
		char pl = s[0];
	for (i = 0; pl != '\0'; i++)
		pl = s[j++];

	return (i);
}
