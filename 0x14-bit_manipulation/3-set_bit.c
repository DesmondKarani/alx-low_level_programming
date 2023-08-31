#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the pointer to the number to modify
 * @index: the index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask; /* a mask to set the bit */

	if (index > (sizeof(unsigned long int) * 8 - 1)) /* check if index is valid */
		return (-1);

	mask = 1 << index; /* create a mask with 1 at index bit */

	*n = *n | mask; /* use bitwise OR to set the bit */

	return (1);
}
