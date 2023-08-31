#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or contains non-binary chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	/* check if b is NULL or empty */
	if (b == NULL || *b == '\0')
		return (0);

	/* loop through the string and shift the number left by one bit */
	while (b[i] != '\0')
	{
		/**
		 * If character is '0', just shift num
		 * (since shifting will add a 0 bit)
		 */
		if (b[i] == '0')
		{
			num <<= 1;
		}
		/* If character is '1', shift num and add 1 */
		else if (b[i] == '1')
		{
			num = (num << 1) + 1;
		}

		/* if the char is neither '0' nor '1', return 0 */
		else
		{
			return (0);
		}
		i++;
	}

	return (num);
}
