#include "main.h"
/**
 * _isalpha - check for alphabet
 * @c: character too be checked
 * Return: 1if character is later 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
