#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - print the alphabet of lower ca
 */
void print_alphabet_x10(void)
{
		char l;
		int count;
for (count = 0; count < 10; count++)
{
	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
}
