#include "main.h"
/**
 *_strncat - a function that concatenates two strings.
 * Please note that in this case, the string to be appended
 * does not need to be null terminated. So you specify how much of it is used
 *
 * @dest: the string to be concatenated.
 * @src: the string to be appended to dest, bu determined by n value.
 * @n: the determiner of concatenation.
 *
 * Return: the function must return dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
