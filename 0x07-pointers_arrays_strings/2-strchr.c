#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * @s: The string in which to search for the character.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character 'c' in
 *	the string 's', or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);

	return (NULL);
}
