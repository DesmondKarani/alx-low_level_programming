#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the newly allocated space in memory,
 *	containing s1 followed by s2, and null terminated.
 *	Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	concat_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}
