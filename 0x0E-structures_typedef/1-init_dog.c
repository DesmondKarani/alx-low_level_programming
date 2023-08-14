#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: Pointer to the dog struct to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner.
 *
 * Description: Initializes a dog struct with the given attributes.
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
