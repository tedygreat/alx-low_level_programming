#incude "main.h"
/**
 * puts2 - function should print halfe character
 * @str: input
 * Return: nothing
 */

void puts2(char *str)
{
		int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(i);
		}
		else
			continue;
	}
	_putchar('\n');
}
