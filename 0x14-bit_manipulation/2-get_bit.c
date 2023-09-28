#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
