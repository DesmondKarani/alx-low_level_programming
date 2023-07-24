#include "main.h"
/**
 * puts_half - prints the second half of a string followed by a new line.
 * If the number of characters is odd, it prints the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2.
 * @str: the string to be half-printed
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int a, b, des;

	des = 0;

	for (a = 0; str[a] != '\0'; a++)
		des++;

	b = (des / 2);

	if ((des % 2) == 1)
		b = ((des + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
