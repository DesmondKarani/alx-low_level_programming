#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - A function that prints a string, followed by new line.
 *	Similar to puts but without it.
 *	Be aware that in large blocks of code, this might lead to stack
 *	overflow.
 * @s: A string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar(10);
	}
}
