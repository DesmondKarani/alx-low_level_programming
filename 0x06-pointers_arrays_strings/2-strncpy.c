#include <string.h>
#include "main.h"
/**
 * _strncpy -  a function that copies a string.
 * @dest: Variable to receive the copied string.
 * @src: variable to source the copy.
 * @n: determiner for how many elements to copy from src variable.
 *
 * Return: the function must return dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	/*
	 * if (n < strlen(dest))
	 * {
	 * dest[n] = '\0';
	 * }
	 */

	return (dest);
}
