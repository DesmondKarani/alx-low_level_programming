#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: Pointer to be used.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int StringLength = 0;

	while (*s != '\0')
	{
		StringLength++;
		s++;
	}

	return (StringLength);
}
