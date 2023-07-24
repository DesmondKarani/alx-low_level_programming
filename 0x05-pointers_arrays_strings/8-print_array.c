#include "main.h"

/**
 * print_array - Prints the first n elements of an array of integers,
 * followed by a new line.
 * @a: An array of integers.
 * @n: The number of elements to print from the array.
 *
 * Return: Nothing.
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < (n - 1); k++)
	{
		printf("%d, ", a[k]);
	}
		if (k == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
