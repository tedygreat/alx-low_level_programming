#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - func print any thing
 * @format: var
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
		va_list arg;
		unsigned int i, j, c;
		char *str;
		const char t_arg[] = "cifc";
			j, i, c = 0;
		va_start(arg, format);
	while (format && format[i])
	{
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
				printf(", ");
				break;
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%C", va_arg(arg, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double)), c = 1;
				break;
			case 's':
				str = va_arg(arg, char *), c = 1;
				if (!str)
				{
					printf("(nill");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
