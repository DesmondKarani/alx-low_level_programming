#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include "main.h"

/**
 * main - Adds positive numbers.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if successful, 1 if not.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *endptr;

	for (i = 1; i < argc; i++)
	{
		long num = strtol(argv[i], &endptr, 10);

		if (errno != 0 || *endptr != '\0' || num > INT_MAX || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
