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
	int len = strlen(str);
	int start = len % 2 == 0 ? len / 2 : (len - 1) / 2;

	for (int i = start; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
