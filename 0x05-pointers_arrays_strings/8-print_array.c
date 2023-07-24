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
	char buffer[12];
	int i, j;

	for (i = 0; i < n; i++)
	{
		sprintf(buffer, "%d", a[i]);
		for (j = 0; buffer[j] != '\0'; j++)
		{
			write(1, &buffer[j], 1);
		}

		if (i < n - 1)
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
