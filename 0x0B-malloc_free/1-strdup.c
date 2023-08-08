#include <stdlib.h>
#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: A pointer to the newly allocated space in memory,
 *         containing a copy of the string given as a parameter
 */
char *_strdup(char *str)
{
	int i;
	int length;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	duplicate = (char *) malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}
