#include "main.h"
#include <ctype.h>
/**
 * string_toupper - a function that
 * changes all lowercase letters of a string to uppercase.
 * @str: the string to be converted with toupper.
 * Return: should return the converted string str.
 */
char *string_toupper(char *str)
{
	for (int b = 0; str[b]; b++)
	{
		str[b] = toupper((unsigned char) str[b]);
	}

	return (str);
}
