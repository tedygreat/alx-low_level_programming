#include "dog.h"
#include <stddef.h>
/**
 * init_dog - function that initialize variable
 * @d: var
 * @name: var1
 * @age: var3
 * @owner: var3
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

