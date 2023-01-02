#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: var
 * @needle: var1
 * Return: pointer to change the beginning
 */
char *_strstr(char *haystack, char *needle)
{
		int index = 0;
	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
