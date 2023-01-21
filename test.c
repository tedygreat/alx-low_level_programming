#include <stdarg.h>
#define bufer_size 1024
void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - new printf function
 * @format: format type
 * Return: printed char
 */

int _printf(const char *format, ...)
{
	int i, flags, width, precision,  size;
	int printed_char = 0, printed = 0;
	int buff_ind = 0;
	char buffer[bufer_size];
	if (format == NULL)
		return (-1);
	va_list arg;
	va_start(arg, format)
		for (i = 0; format && format[i] != 0; i++)
		{
			if (format[i] != '%')
			{
				buffer[buff_ind++] = format[i];
				if (buff_ind == bufer_size)
					print_buffer(buffer, &buff_ind):
				printed_char++;
			}
			else
			{
				print _buffer(buffer, &buff_ind);
				flags = get_flags(format, &i, arg);
				width =  get_width(format, &i, arg);
				precision = get_precision(format, &i,arg);
				size = get_size(format, &i);
				++i;
				printed = handle_print(format,&i, arg, buffer, flages, width, precision, size);
				if(printed == -1)
					return (-1);
				printed_chars += printed;
			}
		}
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}


/**
 * print_buffer - print the contents of the buffer if exist
 * @buffer: array
 * @buff_ind: index
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}


