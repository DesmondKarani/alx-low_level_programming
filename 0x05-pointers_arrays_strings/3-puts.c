#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line, to stdout
 * @str: The string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		printf("%c", *str);
		str++;
	}

	printf("\n");
}
