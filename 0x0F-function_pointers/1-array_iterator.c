#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter on each element
 * of an array.
 * @array: The array to be acted upon.
 * @size: Size of the array.
 * @action: Function pointer to the function to be used on each array element.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* Check for NULL pointers to avoid dereferencing NULL */
	if (array == NULL || action == NULL)
		return;

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
