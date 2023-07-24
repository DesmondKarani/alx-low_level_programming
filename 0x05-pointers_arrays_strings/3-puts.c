#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the input string.
 *
 * Return: None (void).
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
