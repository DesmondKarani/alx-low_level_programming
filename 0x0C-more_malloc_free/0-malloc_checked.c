#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the integer to be allocated memory.
 *
 * Return: Returns 98 if there's no memory availble, or pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *des = malloc(b);

	if (des == NULL)
		exit(98);

	return (des);
}
