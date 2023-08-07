#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of chars and initializes
 * it with a specific char.
 *
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if size is 0 or if allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
