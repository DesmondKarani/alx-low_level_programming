#include "main.h"
/**
 * string_toupper - a function that
 * changes all lowercase letters of a string to uppercase.
 * @str: the string to be converted with toupper.
 * Return: should return the converted string str.
 */
char *string_toupper(char *n)
{
	for (int b = 0; n[b]; b++)
	{
		n[b] = toupper((unsigned char) n[b]);
	}

	return (n);
}
