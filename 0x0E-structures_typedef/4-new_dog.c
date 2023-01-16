#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int str_len(char *str);
char *_str_cpy(char *des, char *src);
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

/**
 * str_len - function that perform string lenth
 * @str: string variable
 * Return: length of string
 */

int str_len(char *str)
{
		int lenth;
			lenth = 0;
	while (str[lenth])
		lenth++;
	return (lenth);
}


/**
 * _str_cpy -function copy string
 * @des: var
 * @src: var1
 * Return: copy string
 */

char *_str_cpy(char *des, char *src)
{
		int i;
	for (i = 0; src[i]; i++)
	{
		src[i] = des[i];
	}
	des[i] = '\0';
	return (des);
}
