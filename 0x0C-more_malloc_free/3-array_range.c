#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: Pointer to the newly created array, or NULL if failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
