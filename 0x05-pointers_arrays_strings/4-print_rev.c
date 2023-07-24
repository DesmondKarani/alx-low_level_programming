#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to the input string.
 *
 * Return: None (void).
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar(10);
}
