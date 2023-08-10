#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to concatenate from s2.
 *
 * Return: Pointer to newly allocated space containing s1 followed by
 *	the first n bytes of s2, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	new_str = malloc(len_s1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';
	return (new_str);
}
