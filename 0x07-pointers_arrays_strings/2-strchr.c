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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	/*check if 'c' is the null character*/
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
