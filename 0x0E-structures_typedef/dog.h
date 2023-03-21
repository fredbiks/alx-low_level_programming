#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: a pointer to a character array that holds the dog's name
 * @age: the age of the dog as a float
 * @owner: a pointer to a character array that holds the owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

