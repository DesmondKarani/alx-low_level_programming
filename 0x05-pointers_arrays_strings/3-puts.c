#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the input string.
 *
 * Return: None (void).
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}

	write(1, "\n", 1);
}
