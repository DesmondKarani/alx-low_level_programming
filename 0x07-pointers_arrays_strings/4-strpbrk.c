#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: The string to evaluate.
 * @accept: The string containing the list of characters to find in 's'
 *
 * Return: 0 for success.
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
