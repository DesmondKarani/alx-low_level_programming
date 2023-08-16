#include <stdio.h>
#include "main.h"
/**
 * print_name - Prints a name using a callback function.
 * @name: Pointer to the name string to be printed.
 * @f: Function pointer to the callback function to print the name.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check if name and function pointer are not NULL */
	if (name == NULL || f == NULL)
		return;

	/* Calls the function passed as an argument to print the name */
	f(name);
}
