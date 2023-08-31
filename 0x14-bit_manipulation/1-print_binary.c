#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	if (n > 1) /* recur until n is 0 */
		print_binary(n >> 1); /* right shift n by 1 bit */

	_putchar((n & 1) + '0'); /* print the last bit of n */
}
