#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initalizes a variable of type struct_dog
 * @d: pointer to address of struct_dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
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
