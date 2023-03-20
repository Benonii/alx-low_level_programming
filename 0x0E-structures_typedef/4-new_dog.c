#include "dog.h"
#include <stddef.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog(new_dog)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = &dog_t;

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
