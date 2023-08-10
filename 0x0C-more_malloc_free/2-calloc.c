#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and sets memory to zero.
 * @nmemb: Number of members.
 * @size: Size of each member.
 *
 * Return: Pointer to the allocated memory or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	/* Check for multiplication overflow */
	if (size != 0 && total_size / size != nmemb)
		return (NULL);

	p = malloc(total_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		p[i] = 0;

	return (p);
}
