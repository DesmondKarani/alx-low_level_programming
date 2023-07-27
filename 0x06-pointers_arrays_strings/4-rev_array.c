#include <stdio.h>
#include "main.h"
/**
 * reverse_array - a function that reverses the
 * content of an array of integers.
 *
 * @a: the array to be reversed.
 * @n: the length of the array.
 */
void reverse_array(int *a, int n)
{
	int *des = *a;
	int *sed = a + n - 1;

	while (des < sed)
	{
		int hand = *des;
		*des = *sed;
		*sed = hand;

		des++;
		sed--;
	}
}
