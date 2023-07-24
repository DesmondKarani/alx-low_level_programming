#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int des[100];
	int a, sum, g;

	sum = 0;	

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		des[a] = rand() % 78;
		sum += (des[a] + '0');
		putchar(des[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			g = 2772 - sum - '0';
			sum += g;
			putchar(g + '0');
			break;
		}
	}

	return (0);
}
