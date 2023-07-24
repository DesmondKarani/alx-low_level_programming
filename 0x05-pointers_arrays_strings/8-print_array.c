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

	for (int i = 0; i < n; i++)
	{
		itoa(a[i], buffer, 10);

	for (int j = 0; buffer[j] != '\0'; j++)
	{
		putchar(buffer[j]);
	}

	if (i < n - 1)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
}
