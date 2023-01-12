#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc -function that perform allocate memory of an array
 * @nmemb: var
 * @size: var2
 * Return: nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
		void *m;
		char *fill;
		unsigned int i;
	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	fill = m;
	if (fill == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';
	return (m);
}
