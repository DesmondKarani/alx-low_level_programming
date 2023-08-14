#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Function that prints a struct dog.
 * @d: Pointer to the struct dog to print.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return; /* If d is NULL, print nothing */
	}

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age); /* Assuming age cannot be NULL */
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
