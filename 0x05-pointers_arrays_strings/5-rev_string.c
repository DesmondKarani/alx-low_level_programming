#include <main.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the input string.
 *
 * Return: None (void).
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;

	int length = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
