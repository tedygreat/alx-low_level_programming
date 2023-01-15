#include "main.h"

/**
 *main - func
 * @s: input
 * Return:Always 0.
 */

int main(void)
{
	int pass;
	pass = (rand() % 128);
	printf("%c", pass);
	return (0);
}
