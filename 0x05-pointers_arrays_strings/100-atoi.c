#include "main.h"

/**
 * _atoi - converts a string to an integer.
 *
 * @s: string to be converted.
 *
 * Return: the int converted is returned.
 */
int _atoi(char *s)
{
	int i, d, n, des, f, karani;

	i = 0;
	d = 0;
	n = 0;
	des = 0;
	f = 0;
	karani = 0;

	while (s[des] != '\0')
		des++;

	while (i < des && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			karani = s[i] - '0';
			if (d % 2)
				karani = -karani;
			n = n * 10 + karani;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
}
