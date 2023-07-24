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
	int des = 0;
	int i = 0;
	char *y = str;
	int d;

	while (*y != '\0')
	{
		y++;
		des++;
	}
	i = des - 1;
	for (d = 0 ; d <= i ; d++)
	{
		if (d % 2 == 0)
	{
		_putchar(str[d]);
	}
	}
	_putchar('\n');
}
