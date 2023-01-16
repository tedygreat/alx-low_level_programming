#include "dog.h"
#include <stddef.h>

/**
 * print_dog - function that print dog
 * @d: var
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("name: (nil)\n");
	}
	else
	{
		printf("name: %s\n", d->name);
	}
	if (d->age == NULL)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("age: %s\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
