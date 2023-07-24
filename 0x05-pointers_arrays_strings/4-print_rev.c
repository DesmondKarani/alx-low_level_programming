#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the input string.
 *
 * Return: None (void).
 */
void print_rev(char *s)
{
	int desi = 0;
	int p;

	while (*s != '\0')
	{
		desi++;
		s++;
	}
	s--;
	for (p = desi; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

