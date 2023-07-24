#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: Pointer to the input string.
 *
 * Return: None (void).
 */
void puts2(char *str)
{
	if (str == NULL)
		return;

	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
