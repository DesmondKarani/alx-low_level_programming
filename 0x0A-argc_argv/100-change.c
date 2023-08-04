#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if successful, 1 if not.
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int size = sizeof(denominations) / sizeof(denominations[0]);
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		while (cents >= denominations[i])
		{
			cents -= denominations[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);
}
