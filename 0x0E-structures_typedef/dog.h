#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that contains name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

