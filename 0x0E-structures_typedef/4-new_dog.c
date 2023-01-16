#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that create new dog
 * @name: var
 * @age: var1
 * @owner: var2
 * Return: new structur of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *dog_new;
	if (name == NULL || age < 0 || NULL || owner == NULL)
		return (NULL);
	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);
	return (dog_new);
}
