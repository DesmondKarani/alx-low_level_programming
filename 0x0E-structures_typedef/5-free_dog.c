#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees the memory used by a dog_t structure.
 * @d: Pointer to the dog_t structure to be freed.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
