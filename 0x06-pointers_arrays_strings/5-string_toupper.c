#include "main.h"
#include <ctype.h>
/**
 * string_toupper - a function that
 * changes all lowercase letters of a string to uppercase.
 * @d: the string to be converted with toupper.
 * Return: should return the converted string d.
 */
char *string_toupper(char *d)
{
	for (int b = 0; d[b]; b++)
	{
		
		d[b] = toupper((unsigned char) d[b]);
	}

	return (d);
}
