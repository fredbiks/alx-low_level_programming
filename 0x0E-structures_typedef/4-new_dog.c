#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog_s - A struct that represents a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 */
typedef struct dog_s
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * new_dog - Creates a new dog_t struct with the given name, age, and owner
 *
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The name of the new dog's owner
 *
 * Return: pointer to the new dog_t struct, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_name, name);
	strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}

