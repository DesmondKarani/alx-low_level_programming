#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner.
 *
 * Return: Pointer to the new dog structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *newName = NULL, *newOwner = NULL;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);

	if (name)
	{
		newName = strdup(name);
		if (!newName)
		{
			free(newDog);
			return (NULL);
		}
	}

	if (owner)
	{
		newOwner = strdup(owner);
		if (!newOwner)
		{
			free(newName);
			free(newDog);
			return (NULL);
		}
	}

	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;

	return (newDog);
}
