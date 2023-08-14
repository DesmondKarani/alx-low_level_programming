#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Describes a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the owner.
 *
 * Description: A struct to store various attributes of a dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
