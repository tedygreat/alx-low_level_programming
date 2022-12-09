#include <stdio.h>
/**
 * main - alphabet
 * Description: 'exept q and e
 * Return: Always 0.
 */
int main(void)
{
	char l;
for (l = 'a'; l <= 'z'; l++)
	if (l != 'q' && l != 'e')
	{
		putchar(l);
	}
putchar('\n');
	return (0);
}
