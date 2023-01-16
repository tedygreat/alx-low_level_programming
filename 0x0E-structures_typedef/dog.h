#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - func
 * @name: var
 * @age: var1
 * @owner: var2
 * Description: structurer data type
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
