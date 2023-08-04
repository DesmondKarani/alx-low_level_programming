#include <stdio.h>
#include "main.h"
/**
 *  main - Prints program name, followed by a new line.
 *  @argc: Argument count.
 *  @argv: Argument vector.
 *
 *  Return: returns 0 for success.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
