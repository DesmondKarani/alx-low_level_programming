#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area 's'.
 *
 * Note: Be careful to ensure that the parameter 'n'
 *	does not exceed the size of the memory area pointed to by 's'
 *	in order to avoid a buffer overflow and potential memory errors.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
