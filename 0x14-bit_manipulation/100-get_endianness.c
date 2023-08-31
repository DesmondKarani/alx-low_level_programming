#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x; /* a test number */
	char *c; /* a pointer to the first byte of x */

	x = 1; /* assign x to 1 */
	c = (char *)&x; /* assign c to the address of x */

	return (*c); /* return the value of the first byte of x */
}
