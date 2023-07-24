#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line, to stdout
 * @str: The string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
