#include "main.h"
/**
 * factorial - Basically returns the factorial of a given number.
 * @n: The integer value we will use to calculate the factorial.
 * Return: The function just returns the integer factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
