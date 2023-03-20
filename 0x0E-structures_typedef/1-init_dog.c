#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: pointer to dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: This function initializes a dog structure with the given
 *              name, age, and owner.
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


