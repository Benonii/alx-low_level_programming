#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initalizes a variable of type struct_dog
 * @d: pointer to address of struct_dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));

        if (d != NULL)
        {
                d->name = name;
                d->age = age;
                d->owner = owner;
        }
	return(d);
}
