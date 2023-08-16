#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search in.
 * @size: Size of the array.
 * @cmp: Function pointer to the comparison function.
 *
 * Return: Index of the first element for which the cmp function doesn't
 *	return 0. -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Handle edge cases */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		/* If the comparison function does not return 0 */
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1); /* No element matched */
}
