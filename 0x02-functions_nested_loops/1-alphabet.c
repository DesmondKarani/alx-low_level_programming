#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_alphabet - function that prints the alphabet, in lowercase,
 *                 followed by a new line.
 */
void print_alphabet(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
{
	_putchar(c);
	_putchar(' ');
	/*To print a space after each character*/
}
	_putchar('\n');
}

/**
 * main - Main function
 *
 * Return: 0 on success
 */
int main(void)
{
	print_alphabet();
	return (0);
}
