#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 *	Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located
 *	If value is not present or array is NULL, returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t step = jump;
	size_t i;

	if (!array)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] < value)
		{
			step = prev + jump;
			if (step >= size)
			{
				break;
			}
			prev += jump;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - jump, step);

	step = step < size ? step : size - 1;
	for (i = prev - jump; i <= step && array[i] <= value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
