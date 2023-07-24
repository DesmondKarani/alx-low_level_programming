#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers.
 *
 * @a: Integer to be swapped.
 * @b: Integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int des = *a;
	*a = *b;
	*b = des;
}
