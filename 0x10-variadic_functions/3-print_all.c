#include "variadic_functions.h"
/**
 * print_all - func print any thing
 * @format: var
 */
void print_all(const char * const format, ...)
{
		va_list arg;
		unsigned int i, j, c;
		char *str;
		const char t_arg[] = "cifs";
			i = 0;
			c = 0;
	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int)), c = 1;
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
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	} printf("\n"), va_end(arg);
}
