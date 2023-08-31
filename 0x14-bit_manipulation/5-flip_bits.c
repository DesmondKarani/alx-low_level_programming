#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x; /* the XOR of n and m */
	unsigned int count; /* the number of bits to flip */

	x = n ^ m; /* XOR gives 1 for different bits and 0 for same bits */
	count = 0; /* initialize count to 0 */

	while (x) /* loop until x is 0 */
	{
		count += x & 1; /* increment count by the last bit of x */
		x >>= 1; /* right shift x by 1 bit */
	}

	return (count);
}
